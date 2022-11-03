PROGRAM=tp2
CC=g++
CFLAGS=-Wall -Werror -Wconversion
DEBUG=-g
$(PROGRAM): main.o Animal.o Conejo.o Caballo.o Erizo.o Gato.o Lagartija.o Perro.o Roedor.o animal_handler.o menu.o
	$(CC) $(CFLAGS) $(DEBUG) main.o Animal.o Conejo.o Caballo.o Erizo.o Gato.o Lagartija.o Perro.o Roedor.o animal_handler.o menu.o -o $(PROGRAM)

main.o: main.cpp Nodo.h Lista.h
	$(CC) $(CFLAGS) $(DEBUG) -c main.cpp


Animal.o: Animal.cpp Animal.h
	$(CC) $(CFLAGS) $(DEBUG) -c Animal.cpp

Conejo.o: Conejo.cpp Conejo.h
	$(CC) $(CFLAGS) $(DEBUG) -c Conejo.cpp

Caballo.o: Caballo.cpp Caballo.h
	$(CC) $(CFLAGS) $(DEBUG) -c Caballo.cpp

Erizo.o: Erizo.cpp Erizo.h
	$(CC) $(CFLAGS) $(DEBUG) -c Erizo.cpp

Gato.o: Gato.cpp Gato.h
	$(CC) $(CFLAGS) $(DEBUG) -c Gato.cpp

Lagartija.o: Lagartija.cpp Lagartija.h
	$(CC) $(CFLAGS) $(DEBUG) -c Lagartija.cpp

Perro.o: Perro.cpp Perro.h
	$(CC) $(CFLAGS) $(DEBUG) -c Perro.cpp

Roedor.o: Roedor.cpp Roedor.h
	$(CC) $(CFLAGS) $(DEBUG) -c Roedor.cpp

animal_handler.o: animal_handler.cpp animal_handler.h Lista.h Animal.h Conejo.h Caballo.h Erizo.h Gato.h Lagartija.h Perro.h Roedor.h
	$(CC) $(CFLAGS) $(DEBUG) -c animal_handler.cpp

menu.o: menu.cpp menu.h
	$(CC) $(CFLAGS) $(DEBUG) -c menu.cpp


clean:
	rm -vf *.o $(PROGRAM)