#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "../pb/helloworld.pb.h"

#define MAXLEN 1024

const char* local_ip = "127.0.0.1";
const int port = 3000;

int main(int argc,char* argv[])
{
	int ret;
	char buff[MAXLEN];
	memset(buff,0,MAXLEN*sizeof(char));
	
	int fd = socket(AF_INET,SOCK_STREAM,0);	

	if(fd == -1)
	{
		perror("SOCKET");
		exit(0);
	}
	struct sockaddr_in address;

	address.sin_family = AF_INET;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = inet_addr(local_ip);

	ret = connect(fd,(struct sockaddr*)&address,sizeof(struct sockaddr));

	if(ret == -1)
	{
		perror("CONNECT:");
		exit(0);
	}

	test::helloworld msg;
	std::string msg_string;
	msg.set_type(100);
	msg.set_msg("hello world!");
	msg.SerializeToArray(buff,sizeof(buff));

	size_t sendNum = send(fd,buff,strlen(buff),0);

	if(sendNum == -1)
	{
		perror("SEND:");
	}

	
	return 0;
}
