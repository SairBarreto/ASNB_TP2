PROGRAM=tp
CC=g++
CFLAGS=-Wall -Werror -Wconversion
DEBUG=-g
$(PROGRAM): main.o nodo.o lista.o
	$(CC) $(CFLAGS) $(DEBUG) main.o lista.o nodo.o -o $(PROGRAM)

main.o: main.cpp nodo.h lista.h
	$(CC) $(CFLAGS) $(DEBUG) -c main.cpp

lista.o: lista.cpp lista.h nodo.h
	$(CC) $(CFLAGS) $(DEBUG) -c lista.cpp

nodo.o: nodo.cpp nodo.h
	$(CC) $(CFLAGS) $(DEBUG) -c nodo.cpp

clean:
	rm -vf *.o $(PROGRAM)