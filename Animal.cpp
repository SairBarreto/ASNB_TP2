#include "Animal.h"
#include <iostream>
using namespace std;


Animal::Animal(string nombre, int edad, string tamanio, string especie)
{
    this->nombre = nombre;
    this->edad = edad;
    this->tamanio = tamanio;
    this->especie = especie;
    this->hambre = 0;
    this->higiene = 100;
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