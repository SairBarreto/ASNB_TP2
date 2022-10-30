#include <iostream>
#include "lista.h"

void leer_archivo(){
    
    Animal animal;
    string edad;
    char delimitador = ','; //El delimitador tiene que de tipo char con string no funciona 
    ifstream archivo("animales.csv", ios::in);

    if(archivo.is_open()){

        while(!archivo.eof())
        {
            getline(archivo, animal.nombre, delimitador);
            getline(archivo, edad, delimitador);
            getline(archivo, animal.tamanio, delimitador);
            getline(archivo, animal.especie, delimitador);
            getline(archivo, animal.personalidad, '\n');

            animal.edad = stoi(edad);

            cout << animal.nombre << "," << animal.edad << "," << animal.tamanio << "," << animal.especie << "," << animal.personalidad << endl;
        
            switch (animal.especie){
                    case "P":
                    Animal* Perro = new Animal(animal.nombre, animal.edad, animal.tamanio);
                    l->agregar_nodo(Perro);
                    cout << l->obtener_actual_dato()->mostrar_nombre() <<endl;
                    break;
                    case "G":
                    Animal* Gato = new Animal(animal.nombre, animal.edad, animal.tamanio);
                    l->agregar_nodo(Gato);
                    cout << l->obtener_actual_dato()->mostrar_nombre() <<endl;
                    break;
                    case "C":
                    Animal* Caballo = new Animal(animal.nombre, animal.edad, animal.tamanio);
                    l->agregar_nodo(Caballo);
                    cout << l->obtener_actual_dato()->mostrar_nombre() <<endl;
                    break;
                    case "R":
                    Animal* Roedor = new Animal(animal.nombre, animal.edad, animal.tamanio);
                    l->agregar_nodo(Roedor);
                    cout << l->obtener_actual_dato()->mostrar_nombre() <<endl;
                    break;
                    case "O":
                    Animal* Conejo = new Animal(animal.nombre, animal.edad, animal.tamanio);
                    l->agregar_nodo(Conejo);
                    cout << l->obtener_actual_dato()->mostrar_nombre() <<endl;
                    break;
                    case "E":
                    Animal* Erizo = new Animal(animal.nombre, animal.edad, animal.tamanio);
                    l->agregar_nodo(Erizo);
                    cout << l->obtener_actual_dato()->mostrar_nombre() <<endl;
                    break;
                    case "L":
                    Animal* Lagartija = new Animal(animal.nombre, animal.edad, animal.tamanio);
                    l->agregar_nodo(Lagartija);
                    cout << l->obtener_actual_dato()->mostrar_nombre() <<endl;
                    break;
            }
        }
    }
    else{
        cout << "No se pudo abrir el archivo" << endl;
    }
}