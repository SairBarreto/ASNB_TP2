#include <iostream>

#include "Lista.h"
#include "Animal.h"

using namespace std;


struct tamanio_t {
    string tamanio;
    int min;
};

const tamanio_t TAMANIOS[5] = {
    {"diminuto",0},
    {"pequenio",2},
    {"mediano",10},
    {"grande",20},
    {"gigante",50}
};

const int CANTIDAD_TAMANIOS = 5;


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

//Para la opcion 5
void adoptar_animal(Lista<Animal>* lista_animales);

void mostrar_animales_en_adopcion(Lista<Animal>* lista_animales, int metros_cuadrados);

bool verificar_animal_a_adoptar(Lista<Animal>* lista_animales, string nombre_ingresado);

bool puede_vivir_en_espacio(Animal* animal, int metros_cuadrados);

int string_a_tamanio(string tamanio);