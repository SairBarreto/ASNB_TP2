#include "Animal.h"
#include <iostream>
using namespace std;


Animal::Animal(string _nombre, int _edad, string _tamanio, string _especie)
{
    nombre = _nombre;
    edad = _edad;
    tamanio = _tamanio;
    especie = _especie;
    hambre = 0;
    higiene = 100;
}

int Animal::get_higiene()
{

    return higiene;
}

int Animal::get_hambre()
{

    return hambre;
}

void Animal::baniar()
{
    higiene = 100;

}

void Animal::alimentar()
{

    hambre = 0;
}

void Animal::gastar_energia()
{

    hambre = hambre + 10;
}

void Animal::ensuciar()
{
    higiene = higiene - 10;
}
