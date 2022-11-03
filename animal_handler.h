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

//PRE: -    
//POS: Lee archivo previamente cargador almacenando datos en lista
void leer_archivo(Lista<Animal>* lista_animales);

//PRE: Lista previamente completada    
//POS: Recorre secuencialmente la lista listando los animales con sus atributos
void listar_animales(Lista<Animal>* listar_animales);

especie_t string_a_especie_t(string especie);

//PRE: Lista previamente completada, ingreso valido de entero (metros_cuadrados) y string (nombre_buscado) por usuario
//POS: Adopta animal indicado por el usuario siendo eliminado su nodo de la lista
void adoptar_animal(Lista<Animal>* lista_animales);

//PRE: metros_cuadrados valido entre 0-100    
//POS: Muestra animales validos para adoptar dependiendo de tus metros cuadrados
void mostrar_animales_en_adopcion(Lista<Animal>* lista_animales, int metros_cuadrados);

//se puede borrar???
bool verificar_animal_a_adoptar(Lista<Animal>* lista_animales, string nombre_ingresado);

//PRE: metros_cuadrados entre 0-100  
//POS: Si metros_cuadrados es mayor al minimo del animal, el mismo puede vivir en el espacio
bool puede_vivir_en_espacio(Animal* animal, int metros_cuadrados);

int string_a_tamanio(string tamanio);

//PRE: Lista completa y valida   
//POS: Baja higiene y sube el hambre de cada animal
void animales_paso_del_tiempo(Lista<Animal>* lista_animales);

//PRE: Lista completa y valida
//POS: Se alimenta a todos los animales devolviendo su hambre a 0
void alimentar_todos_animales(Lista<Animal>* lista_animales);

//PRE: Lista completa y valida
//POS: Se baña a todos los animales devolviendo su higiene a 100
void banio_todos(Lista<Animal>* lista_animales);

//PRE: nombre_buscado debe ser valido
//POS: Despliega menu para el animal individual en caso de ser hallado
void elegir_individualmente(Lista<Animal>* lista_animales);

//PRE: Lista completa y valida
//POS: Bania individualmente al animal, en caso de Gato, Roedor y Lagartija higiene jamas baja por ende no lo baña
void banio_individual(Lista<Animal>* lista_animales);

//PRE: Lista completa y valida
//POS: Se alimenta individualmente al animal seleccionado con su respectiva comida
void comida_individual(Lista<Animal>* lista_animales);