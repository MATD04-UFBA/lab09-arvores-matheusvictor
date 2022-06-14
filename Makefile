.c.o: 
	gcc -c $*.c

.cpp.o:	
	g++	-c $*.cpp

all:	BT

BT:  BT.o cBinaryTree.o cNode.o
	g++ -o $@ $^

clean:
	rm *.o BT
