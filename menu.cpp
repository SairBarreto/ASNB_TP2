#include <iostream>
#include "menu.h"

using namespace std;

void menu()
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