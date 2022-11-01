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
    "C",
    "O",
    "E",
    "G",
    "L",
    "P",
    "R"
};



const string PATH_ANIMALES = "animales.csv";


void leer_archivo(Lista<Animal>* lista_animales);

void listar_animales(Lista<Animal>* listar_animales);

especie_t string_a_especie_t(string especie);

void animales_paso_del_tiempo(Lista<Animal>* lista_animales);