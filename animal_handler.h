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

const string PERSONALIDADES[4] =
{
    "Dormilon",
    "Jugueton",
    "Sociable",
    "Travieso"

};

const string TAMANIOS_STR[5] =
{
    "Diminuto",
    "Pequeño",
    "Mediano",
    "Grande",
    "Gigante"
};

const int EDAD_MAX = 100;

const int EDAD_MIN = 0;




const string PATH_ANIMALES = "animales.csv";


void leer_archivo(Lista<Animal>* lista_animales);

void listar_animales(Lista<Animal>* listar_animales);

especie_t string_a_especie_t(string especie);

bool verificar_nombre(Lista<Animal>* lista_animales,string nombre_ingresado);

void buscar_animales(Lista<Animal>* lista_animales);

void agregar_nodo_a_lista(Lista<Animal>* lista_animales, string nombre, string edad_str, string tamanio_str, string especie_str, string personalidad_str);

void rescatar_animales(Lista<Animal>* lista_animales);

string devolver_especie_palabra_completa(string inicial);
