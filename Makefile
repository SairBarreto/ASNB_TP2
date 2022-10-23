PROGRAM=tp
CC=g++
CFLAGS=-Wall -Werror -Wconversion
DEBUG=-g
$(PROGRAM): main.o 
	$(CC) $(CFLAGS) $(DEBUG) main.o -o $(PROGRAM)

main.o: main.cpp 
	$(CC) $(CFLAGS) $(DEBUG) -c main.cpp

clean:
	rm -vf *.o $(PROGRAM)