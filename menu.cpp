#include <iostream>
#include "menu.h"
#include "animal_handler.h" //Agregue esto para probar la primera opcion

using namespace std;

/* Esto ya esta en el menu.h no es necesario declararlo de nuevo
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
*/
void mostrar_menu()
{
    cout << endl;
    cout << "---------------------------------------------------------" << endl << endl;
    cout << "MENU" << endl;
    cout << "\t 1.Listar animales" << endl;
    cout << "\t 2.Rescatar animal" << endl;
    cout << "\t 3.Buscar animal" << endl;
    cout << "\t 4.Cuidar animales" << endl;
    cout << "\t 5.Adoptar animal" << endl;
    cout << "\t 6.Guardar y salir" << endl;
    cout << endl;
}

int menu_pedir_opcion(){
    int opcion;
    cout << "Ingrese el número de su acción elegida : ";
    cin >> opcion;
    cout << endl << "---------------------------------------------------------" << endl << endl;
    return opcion;
}

void menu_validar_opcion(int &opcion){
    bool es_opcion_valida = opcion > 0 && opcion <= CANTIDAD_DE_OPCIONES;
    string buffer;
    while(!es_opcion_valida){
        cout << "La opción elegida no es una opcion válida, por favor ingrese otra opción: ";
        getline(cin >> ws,buffer);
        opcion = stoi(buffer);
        es_opcion_valida = opcion > 0 && opcion <= CANTIDAD_DE_OPCIONES;
    }
}

void procesar_opcion(int opcion, Lista<Animal>* lista_animales)
{
    switch(opcion){
        case LISTAR_ANIMALES:
            listar_animales(lista_animales);
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
            opcion_2 = menu_pedir_opcion();
            verificar_opcion_2(opcion_2);
            system("pause");
            break;
        case ADOPTAR_ANIMAL:
            adoptar_animal(lista_animales);
            system("pause");
            break;
        case SALIR:
            system("pause");
            break;
    }
}

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
