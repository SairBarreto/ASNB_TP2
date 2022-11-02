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
    int nuevo_hambre = hambre + 10;
    if(nuevo_hambre >= 100)
        hambre = 100;
    else
        hambre = nuevo_hambre;
}

void Animal::ensuciar()
{
    int nuevo_higiene = higiene - 10;
    if(nuevo_higiene <= 0)
        higiene = 0;
    else
        higiene = nuevo_higiene;
}

string Animal::obtener_nombre() {
    return nombre;
}


int Animal::obtener_higiene() {
    return higiene;
}

int Animal::obtener_hambre() {
    return hambre;
}