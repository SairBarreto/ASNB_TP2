#include <iostream>
#include "animal.h"

using namespace std;

Animal::Animal(string nombre, int edad, string tamanio) {
    this->nombre = nombre;
    this->edad = edad;
    this->tamanio = tamanio;
}

int Animal::mostrar_edad() {
    return edad;
}

string Animal::mostrar_nombre() {
    return nombre;
}

string Animal::mostrar_tamanio() {
    return tamanio;
}