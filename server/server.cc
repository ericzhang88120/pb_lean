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
#define BACKLOG 5

const char* listen_ip = "127.0.0.1";
const int port = 3000;


void deal_con(int fd)
{
	size_t size = 0;
	char buff[MAXLEN];
	memset(buff,0,sizeof(buff));

	for(;;)
	{
		size = recv(fd,buff,sizeof(buff),0);

		if(size == -1)
		{
			perror("RECV:");
			return;
		}
		else if(size == 0)
		{
			break;
		}
	}

	test::helloworld msg;
	msg.ParseFromArray(buff,sizeof(buff));
	printf("recv type %d\n",msg.type());
	printf("recv msg %s\n",msg.msg().c_str());
}

int main(int argc,char* argv[])
{
	int ret;

	int fd = socket(AF_INET,SOCK_STREAM,0);	
	if(fd == -1)
	{
		perror("SOCKET");
		exit(0);
	}
	struct sockaddr_in address;
	struct sockaddr_in clientaddr;
	bzero(&address,sizeof(address));
	bzero(&clientaddr,sizeof(clientaddr));
	
	address.sin_family = AF_INET;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = htonl(INADDR_ANY);

	ret = bind(fd,(struct sockaddr*)&address,sizeof(address));

	if(ret == -1)
	{
		perror("BIND:");
		exit(0);
	}

	ret = listen(fd,BACKLOG);

	if(ret<0)
	{
		perror("LISTEN:");
		exit(0);
	}
	// fork a process to accept a connection
	for(;;)
	{
		socklen_t addrlen = sizeof(struct sockaddr);
		int sc;
		sc = accept(fd,(struct sockaddr*)&clientaddr,&addrlen);
		if(sc < 0)
		{
			continue;
		}

		pid_t pid = fork();
		if(pid < 0)
		{
			perror("FORK");
			exit(0);
		}
		else if(pid == 0)
		{
			close(fd);
			deal_con(sc);
			close(sc);
		}
		else
		{
			close(sc);
		}
	}

	return 0;
}
