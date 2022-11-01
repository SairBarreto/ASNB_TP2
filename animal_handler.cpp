#include <iostream>
#include <fstream>
#include "animal_handler.h"
#include "Caballo.h"
#include "Conejo.h"
#include "Erizo.h"
#include "Gato.h"
#include "Lagartija.h"
#include "Perro.h"
#include "Roedor.h"
#include "menu.h"


using namespace std;

void leer_archivo(Lista<Animal>* lista_animales){
    
    string nombre, edad_str, tamanio_str, especie_str, personalidad_str;
    char delimitador = ','; //El delimitador tiene que de tipo char con string no funciona 
    ifstream archivo(PATH_ANIMALES, ios::in);

    if(!archivo.is_open()){
        cout << "No se encontro un archivo con nombre \"" << PATH_ANIMALES << "\", se va a crear el archivo" << endl;
        archivo.open(PATH_ANIMALES, ios::out);
        archivo.close();
        archivo.open(PATH_ANIMALES, ios::in);
    }

    if(archivo.is_open()){

        while(getline(archivo,nombre, delimitador))
        {
            getline(archivo, edad_str, delimitador);
            getline(archivo, tamanio_str, delimitador);
            getline(archivo, especie_str, delimitador);
            getline(archivo, personalidad_str, '\n');

            switch(string_a_especie_t(especie_str)) {
                
                case CABALLO:
                    {
                    Caballo* caballo = new Caballo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(caballo);
                    break;
                    }
                    
                case CONEJO:
                    {
                    Conejo* conejo = new Conejo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(conejo);
                    break;
                    }

                case ERIZO:
                    {
                    Erizo* erizo = new Erizo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(erizo);
                    break;
                    }

                case GATO: 
                    {
                    Gato* gato = new Gato(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(gato);
                    break;
                    }

                case LAGARTIJA:
                    {
                    Lagartija* lagartija = new Lagartija(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(lagartija);
                    break;
                    }

                case PERRO:
                    {
                    Perro* perro = new Perro(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(perro);
                    break;
                    }

                case ROEDOR:
                    {
                    Roedor* rata = new Roedor(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(rata);
                    break;
                    }

                default:
                    break;
            }
        }
    }
    else{
        cout << "No se pudo abrir el archivo" << endl;
    }


    archivo.close();

}


void listar_animales(Lista<Animal>* lista_animales) {

    cout << "Animales en la Reserva:" << endl;

    for(int i = 0; i < lista_animales->obtener_cantidad(); i++) {
        cout << "\t -" << lista_animales->obtener_actual_dato()->obtener_nombre() << " - " << lista_animales->obtener_actual_dato()->get_hambre() << " - " << lista_animales->obtener_actual_dato()->get_higiene() << endl;
        lista_animales->pasar_nodo();
    }

    lista_animales->iniciar_nodo_actual();
}


especie_t string_a_especie_t(string especie) {
    int posicion;
    for(int i = 0; i < CANTIDAD_ESPECIES; i++){
        if(especie == ESPECIES_STR[i])
            posicion = i;
    }
    return (especie_t) posicion;
}

//Cosas para el Manu 2
//Funciona
void alimentar_todos_animales(Lista<Animal>* lista_animales)
{
    for(int i = 0; i < lista_animales->obtener_cantidad(); i++){
        lista_animales->obtener_actual_dato()->hambre = 0;
        lista_animales->pasar_nodo();
    }

    cout << endl;
    cout << "Se han Alimentado a todos los animales en la Reserva" << endl;
    cout << endl << "---------------------------------------------------------" << endl << endl;

    lista_animales->iniciar_nodo_actual();
}
//Funciona
void banio_todos(Lista<Animal>* lista_animales)
{
    char especie;
    for(int i = 0; i < lista_animales->obtener_cantidad(); i++){
        especie = lista_animales->obtener_actual_dato()->obtener_especie()[0];

        switch (especie){
            case 'G':
                cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " es un Gato por lo que no necesita un baño" << endl;
                break;
            case 'R':
                cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " es una Lagartija por lo que no necesita un baño" << endl;
                break;
            case 'L':
                cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " es un Roedor por lo que no necesita un baño" << endl;
                break;
            default:
                lista_animales->obtener_actual_dato()->higiene = 100;
                break;
        }

        lista_animales->pasar_nodo();
    }

    cout << endl;
    cout << "Se han bañado a todos los animales que lo necesitan" << endl;
    cout << endl << "---------------------------------------------------------" << endl << endl;

    lista_animales->iniciar_nodo_actual();
}
//Probar
void elegir_individualmente(Lista<Animal>* lista_animales)
{
    string nombre_buscado;
    int opcion;

    nombre_buscado = elegir_nombre();

    for(int i = 0; i < lista_animales->obtener_cantidad(); i++){
        
        if(lista_animales->obtener_actual_dato()->obtener_nombre() == nombre_buscado){
            cout << endl;
            cout << "Que quiere hacer con " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl << endl;
            mostrar_menu_individual();
            opcion = menu_pedir_opcion();
            procesar_opcion_individual(opcion, lista_animales, i, nombre_buscado);
            i = lista_animales->obtener_cantidad();
        }

        lista_animales->pasar_nodo();
    }

    lista_animales->iniciar_nodo_actual();
}

void banio_individual(Lista<Animal>* lista_animales, int &posicion, string nombre_buscado)
{
    for(int i = posicion; i < lista_animales->obtener_cantidad(); i++){
        if(lista_animales->obtener_actual_dato()->obtener_nombre() == nombre_buscado){
            lista_animales->obtener_actual_dato()->higiene = 100;
            cout << endl;
            cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " a sido bañado" << endl;
            cout << endl << "---------------------------------------------------------" << endl << endl;
            i = lista_animales->obtener_cantidad();
        }
    }
}

void comida_individual(Lista<Animal>* lista_animales, int &posicion, string nombre_buscado)
{
    char especie;
    for(int i = posicion; i < lista_animales->obtener_cantidad(); i++){
        if(lista_animales->obtener_actual_dato()->obtener_nombre() == nombre_buscado){
            lista_animales->obtener_actual_dato()->hambre = 0;
            especie = lista_animales->obtener_actual_dato()->obtener_especie()[0];

            switch (especie){
                case 'P':
                    cout << endl;
                    cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " se le a dado de comer Huesos" << endl;
                    break;
                case 'G':
                    cout << endl;
                    cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " se le a dado de comer Atun" << endl;
                    break;
                case 'C':
                    cout << endl;
                    cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " se le a dado de comer Manzanas" << endl;
                    break;
                case 'R':
                    cout << endl;
                    cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " se le a dado de comer Queso" << endl;
                    break;
                case 'O':
                    cout << endl;
                    cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " se le a dado de comer Lechuga" << endl;
                    break;
                case 'E':
                case 'L':
                    cout << endl;
                    cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " se le a dado de comer Insectos" << endl;
                    break;
            }
            cout << endl << "---------------------------------------------------------" << endl << endl;
            i = lista_animales->obtener_cantidad();
        }
    }
}