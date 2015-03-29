Target=client
CXX=g++
CPPFLAG=-g -w 
SRC=client.cc ../pb/helloworld.pb.cc
OBJ=$(SRC:.cc=.o)

all:$(Target)
$(Target):$(OBJ)
	$(CXX) $(CPPFLAGS) -o $@ $^ /usr/local/lib/libprotobuf.a
$(OBJ):%.o:%.cc
	$(CXX) $(CPPFLAGS) -c $< -o $@

.PHONY:clean
clean:
	-rm -f *.o
	-rm $(Target)