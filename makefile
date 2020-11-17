CC=g++
CFLAGS=-std=c++0x -g -Wall

all: driver guard twitter

twitter: tweets.cpp
	$(CC) $(CFLAGS) -o tweets tweets.cpp

Linkedlist.o: LinkedList.h LinkedList.cpp
	$(CC) $(CFLAGS) -c LinkedList.cpp 

driver: LinkedList.o driver.cpp
	$(CC) $(CFLAGS) -o driver driver.cpp LinkedList.o

guard: guard.cpp A.h B.h
	$(CC) $(CFLAGS) -o guard guard.cpp

clean:
	rm *.o