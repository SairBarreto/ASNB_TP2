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
        cout << "\t -" << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
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

void adoptar_animal(Lista<Animal>* lista_animales){
    int metros_cuadrados = 0;
    string nombre_buscado; 
    cout << "Ingrese cantidad de metros cuadrados disponibles:" << endl;
    cin >> metros_cuadrados;

    mostrar_animales_en_adopcion(lista_animales, metros_cuadrados);
   
    cout << "¿Cual desea adoptar? Ingrese su nombre: " << endl;
    cin >> nombre_buscado;
    bool existe_nombre;
    
    existe_nombre = verificar_animal_a_adoptar(lista_animales, nombre_buscado);
    if(!existe_nombre){
        cout << "No existe animal con ese nombre en la lista. Vuelva a intentarlo." << endl;}
    else{ 
    lista_animales->borrar_nodo_actual();
    cout << "Felicidades usted adopto a " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;} 
 }

 void mostrar_animales_en_adopcion(Lista<Animal>* lista_animales, int metros_cuadrados){    
    
    for(int i=0;i<lista_animales->obtener_cantidad(); i++){
        if(lista_animales->obtener_actual_dato()->obtener_tamanio() <= metros_cuadrados){ 
        cout << "\t -" << lista_animales->obtener_actual_dato()->obtener_nombre() << lista_animales->obtener_actual_dato()->obtener_edad() << lista_animales->obtener_actual_dato()->obtener_especie() << lista_animales->obtener_actual_dato()->obtener_personalidad() << endl;
        }
        lista_animales->pasar_nodo(); 
    }
    lista_animales->iniciar_nodo_actual(); //vuelve al nodo inicial
 }

 bool verificar_animal_a_adoptar(Lista<Animal>* lista_animales, string nombre_ingresado){
    bool existe_nombre = false;

    for(int i=0; i<lista_animales->obtener_cantidad(); i++){
        if(lista_animales->obtener_actual_dato()->obtener_nombre() == nombre_ingresado){
            existe_nombre = true;
        }
        lista_animales->pasar_nodo();
    }//no reinicia el nodo a posicion 0 porque debe borrar ese nodo.
    return existe_nombre;
 }
