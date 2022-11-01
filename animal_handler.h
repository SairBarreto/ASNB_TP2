#include <iostream>

#include "Lista.h"
#include "Animal.h"

using namespace std;

enum tamanio_t {
    DIMINUTO = 0,
    PEQUENIO =0,
    MEDIANO = 10,
    GRANDE = 20,
    GIGANTE = 50,
};

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

//Para la opcion 2
void adoptar_animal(Lista<Animal>* lista_animales);

bool verificar_animal_a_adoptar(Lista<Animal>* lista_animales, string nombre_ingresado);