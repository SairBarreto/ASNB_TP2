#include <iostream>
#include <fstream>
#include "funciones.h"
#include "Lista.h"
#include "Animal.h"

using namespace std;

void leer_archivo(){
    
    Lista<Animal>* lista_animales = new Lista<Animal>;
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



            Animal* gato_1 = new Animal(nombre, stoi(edad_str), tamanio_str, especie_str);
            lista_animales->agregar_nodo(gato_1);
            cout << lista_animales->obtener_actual_dato()->obtener_nombre() <<endl;
            /*switch () {
                    case "P":
                        Animal* Perro = new Animal(animal.nombre, animal.edad, animal.tamanio);
                        l->agregar_nodo(Perro);
                        cout << l->obtener_actual_dato()->mostrar_nombre() <<endl;
                        break;
            }*/

        }
    }
    else{
        cout << "No se pudo abrir el archivo" << endl;
    }

    delete lista_animales;

    archivo.close();

}