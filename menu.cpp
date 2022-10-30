#include <iostream>
#include <string>
#include <fstream>
#include "menu.h"
#include "lista.h"
#include "animal.h"

using namespace std;

enum{
    LISTAR_ANIMALES = 1,
    RESCATAR_ANIMAL,
    BUSCAR_ANIMAL,
    CUIDAR_ANIMAL,
    ADOPTAR_ANIMAL,
    GUARDAR_SALIR
};

enum{
    ELEGIR_INDIVIDUALMENTE = 1,
    ALIMENTAR_TODOS,
    BANIO_TODOS,
    REGRESAR_INICIO
};

void mostrar_menu()
{
    cout << "\tMenu" << endl;
    cout << "1.Listar animales" << endl;
    cout << "2.Rescatar animal" << endl;
    cout << "3.Buscar animal" << endl;
    cout << "4.Cuidar animales" << endl;
    cout << "5.Adoptar animal" << endl;
    cout << "6.Guardar y salir" << endl;
}

int opcion_elegida()
{
    int opcion;

    cout << "Opcion: ";
    cin >> opcion;

    verificar_opcion(opcion);

    return opcion;
}

void verificar_opcion(int opcion)
{
    while(opcion < 1 || opcion > 6){
        cout << "Eliga una opcion correcta: ";
        cin >> opcion;
    }
}

void procesar_opcion(int opcion)
{
    switch(opcion){
        case LISTAR_ANIMALES:
            mostrar_todos_los_animales();
            system("pause");
            break;
        case RESCATAR_ANIMAL:
            system("pause");
            break;
        case BUSCAR_ANIMAL:
            system("pause");
            break;
        case CUIDAR_ANIMAL:
            int opcion_2;
            mostrar_menu_2();
            opcion_2 = opcion_elegida();
            verificar_opcion_2(opcion_2);
            system("pause");
            break;
        case ADOPTAR_ANIMAL:
            system("pause");
            break;
        case GUARDAR_SALIR:
            system("pause");
            break;
    }
}
/*
void mostrar_todos_los_animales()
{
    Animal animal;
    char delimitador = ','; //El delimitador tiene que de tipo char con string no funciona 
	string edad;
    ifstream archivo("animales-normal.csv", ios::in);

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
        }
    }
    else{
        cout << "No se pudo leer el archivo" << endl;
    }
}
*/
void mostrar_menu_2()
{
    cout << "\tMenu" << endl;
    cout << "1.Elegir individualmente" << endl;
    cout << "2.Alimentar a todos" << endl;
    cout << "3.Bañar a todos" << endl;
    cout << "4.Regresar al inicio" << endl;
}

void verificar_opcion_2(int opcion_2)
{
    while(opcion_2 < 1 || opcion_2 > 4){
        cout << "Eliga una opcion correcta: ";
        cin >> opcion_2;
    }
}

void procesar_opcion_2(int opcion)
{
    switch(opcion){
        case ELEGIR_INDIVIDUALMENTE:
            system("pause");
            break;
        case ALIMENTAR_TODOS:
            system("pause");
            break;
        case BANIO_TODOS:
            system("pause");
            break;
        case REGRESAR_INICIO:
            system("pause");
            break;
    }
}