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

//PRE: metros_cuadrados entre 0-100  
//POS: Si metros_cuadrados es mayor al minimo del animal, el mismo puede vivir en el espacio
bool puede_vivir_en_espacio(Animal* animal, int metros_cuadrados);

//PRE:-  
//POS: De string a tamanio
int string_a_tamanio(string tamanio);

//PRE: Lista completa y valida   
//POS: Baja higiene y sube el hambre de cada animal
void animales_paso_del_tiempo(Lista<Animal>* lista_animales);

//PRE: Lista previamente completada, ingreso valido de entero (metros_cuadrados) y string (nombre_buscado) por usuario
//POS: Adopta animal indicado por el usuario siendo eliminado su nodo de la lista
void adoptar_animal(Lista<Animal>* lista_animales);

//PRE: metros_cuadrados valido entre 0-100    
//POS: Muestra animales validos para adoptar dependiendo de tus metros cuadrados
void mostrar_animales_en_adopcion(Lista<Animal>* lista_animales, int metros_cuadrados);

//PRE: metros_cuadrados entre 0-100  
//POS: Si metros_cuadrados es mayor al minimo del animal, el mismo puede vivir en el espacio
bool puede_vivir_en_espacio(Animal* animal, int metros_cuadrados);

int string_a_tamanio(string tamanio);

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

//PRE: Lista completa y nombre valido
//POS: Verificar la existencia del nombre ingresado
bool verificar_nombre(Lista<Animal>* lista_animales,string nombre_ingresado);

//PRE: Lista completa y nombre valido
//POS: Buscar la existencia del nombre ingresado
void buscar_animales(Lista<Animal>* lista_animales);

//PRE: Lista completa y datos valido
//POS: Agrega el nuevo nodo ya completo a la lista
void agregar_nodo_a_lista(Lista<Animal>* lista_animales, string nombre, string edad_str, string tamanio_str, string especie_str, string personalidad_str);

//PRE: Lista completa 
//POS: Cargar animales para el rescate
void rescatar_animales(Lista<Animal>* lista_animales);

//PRE: Lista completa 
//POS: Cargar lista reescribiendo el archivo
void guardar_y_salir(Lista<Animal>* lista_animales);

//PRE: Inicial de la especie
//POS: Retorna especie completa
string devolver_especie_palabra_completa(string inicial);

//PRE: -
//POS: Usuario carga especie del animal
string elegir_especie();

//PRE: -
//POS: Usuario carga personalidad del animal
string elegir_personalidad();

//PRE: -
//POS: Usuario carga tamanio del animal
string elegir_tamanio();

//PRE: -
//POS: Usuario carga edad del animal
string ingresar_edad();
