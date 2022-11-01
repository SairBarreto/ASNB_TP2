#include <iostream>

#include "Lista.h"
#include "Animal.h"

using namespace std;


enum especie_t {
    CABALLO = 0,
    CONEJO,
    ERIZO,
    GATO,
    LAGARTIJA,
    PERRO,
    ROEDOR,
    CANTIDAD_ESPECIES
};

const string ESPECIES_STR[7] = {
    "C", //CABALLO [0]
    "O", //CONEJO [1]
    "E", //ERIZO [2]
    "G", //GATO [3]
    "L", //LAGARTIJA [4]
    "P", //PERRO [5]
    "R"  //ROEDOR [6]
};

const string PATH_ANIMALES = "animales.csv";

void leer_archivo(Lista<Animal>* lista_animales);

void listar_animales(Lista<Animal>* listar_animales);

especie_t string_a_especie_t(string especie);

//Para el Menu 2
void alimentar_todos_animales(Lista<Animal>* lista_animales);

void banio_todos(Lista<Animal>* lista_animales);