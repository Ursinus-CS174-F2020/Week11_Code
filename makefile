CC=g++
CFLAGS=-std=c++11 -g -Wall

all: driver guard

Linkedlist.o: LinkedList.h LinkedList.cpp
	$(CC) $(CFLAGS) -c LinkedList.cpp 

driver: LinkedList.o driver.cpp
	$(CC) $(CFLAGS) -o driver driver.cpp LinkedList.o

guard: guard.cpp A.h B.h
	$(CC) $(CFLAGS) -o guard guard.cpp

clean:
	rm *.o