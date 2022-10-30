#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <iostream>

using namespace std;

class Animal {

private:
    string nombre;
    int edad;
    string tamanio;

public:
    Animal(string nombre, int edad, string tamanio);
    string mostrar_nombre();
    int mostrar_edad();
    string mostrar_tamanio();
    //~Animal();
};





#endif //ANIMAL_H_INCLUDED