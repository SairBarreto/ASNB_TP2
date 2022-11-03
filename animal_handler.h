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

const int CANTIDAD_TAMANIOS = 6;


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

const string ESPECIES_COMPLETAS[7] = {
    "Caballo",
    "Conejo",
    "Erizo",
    "Gato",
    "Lagartija",
    "Perro",
    "Roedor"

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
    "Peque�o",
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

//Para la opcion 5
void adoptar_animal(Lista<Animal>* lista_animales);

bool verificar_animal_a_adoptar(Lista<Animal>* lista_animales, string nombre_ingresado);

void mostrar_animales_en_adopcion(Lista<Animal>* lista_animales, int metros_cuadrados);

bool puede_vivir_en_espacio(Animal* animal, int metros_cuadrados);

int string_a_tamanio(string tamanio);

void animales_paso_del_tiempo(Lista<Animal>* lista_animales);

void adoptar_animal(Lista<Animal>* lista_animales);

void mostrar_animales_en_adopcion(Lista<Animal>* lista_animales, int metros_cuadrados);

bool puede_vivir_en_espacio(Animal* animal, int metros_cuadrados);

int string_a_tamanio(string tamanio);

//Para la opcion 4
void alimentar_todos_animales(Lista<Animal>* lista_animales);

void banio_todos(Lista<Animal>* lista_animales);

void elegir_individualmente(Lista<Animal>* lista_animales);

void banio_individual(Lista<Animal>* lista_animales);

void comida_individual(Lista<Animal>* lista_animales);

// opcion 2 y 3

bool verificar_nombre(Lista<Animal>* lista_animales,string nombre_ingresado);

void buscar_animales(Lista<Animal>* lista_animales);

void agregar_nodo_a_lista(Lista<Animal>* lista_animales, string nombre, string edad_str, string tamanio_str, string especie_str, string personalidad_str);

void rescatar_animales(Lista<Animal>* lista_animales);

string devolver_especie_palabra_completa(string inicial);

string elegir_especie();

string elegir_personalidad();

string elegir_tamanio();

string ingresar_edad();
