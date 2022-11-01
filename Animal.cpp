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

string Animal::obtener_nombre() {
    return nombre;
}

string Animal::obtener_tamanio() {
    return tamanio;
}

int Animal::obtener_edad() {
    return edad;
}

string Animal::obtener_especie() {
    return especie;
}

/*La personalidad cambia segun el animal, ademas no la personalidad no esta declarada en Animal.h po eso no lo toma 
string Animal::obtener_personalidad() {
    return personalidad;
}
*/