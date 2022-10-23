PROGRAM=tp
CC=g++
CFLAGS=-Wall -Werror -Wconversion
DEBUG=-g
$(PROGRAM): main.o nodo.o
	$(CC) $(CFLAGS) $(DEBUG) main.o nodo.o -o $(PROGRAM)

main.o: main.cpp 
	$(CC) $(CFLAGS) $(DEBUG) -c main.cpp

nodo.o: nodo.cpp nodo.h
	$(CC) $(CFLAGS) $(DEBUG) -c nodo.cpp

clean:
	rm -vf *.o $(PROGRAM)