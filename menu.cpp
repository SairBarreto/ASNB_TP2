#include <iostream>
#include "menu.h"
#include "Lista.h"
#include "animal_handler.h"

using namespace std;


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
    //bool es_opcion_valida = opcion > 0 && opcion <= SALIR;
    string buffer;
    while(opcion < LISTAR_ANIMALES || opcion > SALIR){
        cout << "La opción elegida no es una opcion válida, por favor ingrese otra opción: ";
        cin >> opcion;
        cout << endl << "---------------------------------------------------------" << endl << endl;
        //getline(cin >> ws,buffer);
        //opcion = stoi(buffer);
        //es_opcion_valida = opcion > 0 && opcion <= SALIR;
    }
}

void procesar_opcion(int opcion, Lista<Animal>* lista_animales)
{
    //int opcion_2;
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
            menu_validar_opcion_2(opcion_2);
            procesar_opcion_2(opcion_2, lista_animales);
            /*
            while(opcion != REGRESAR_INICIO){
                procesar_opcion_2(opcion_2, lista_animales);
                //system("cls");
                mostrar_menu_2();
                opcion_2 = menu_pedir_opcion();
                menu_validar_opcion_2(opcion_2);
            }*/
            system("pause");
            break;
        case ADOPTAR_ANIMAL:
            system("pause");
            break;
        case SALIR:
            system("pause");
            break;
    }
}

void mostrar_menu_2()
{
    cout << endl;
    cout << "---------------------------------------------------------" << endl << endl;
    cout << "Menu para el Cuidado de los Animales" << endl << endl;
    cout << "\t 1.Elegir individualmente" << endl;
    cout << "\t 2.Alimentar a todos" << endl;
    cout << "\t 3.Bañar a todos" << endl;
    cout << "\t 4.Regresar al inicio" << endl;
    cout << endl;
}

void menu_validar_opcion_2(int &opcion_2){
    //bool es_opcion_valida = opcion_2 > 0 && opcion_2 <= REGRESAR_INICIO;
    //string buffer;
    while(opcion_2 < ELEGIR_INDIVIDUALMENTE || opcion_2 > REGRESAR_INICIO){
        cout << "La opción elegida no es una opcion válida, por favor ingrese otra opción: ";
        cin >> opcion_2;
        cout << endl << "---------------------------------------------------------" << endl << endl;
        //getline(cin >> ws,buffer);
        //opcion_2 = stoi(buffer);
        //es_opcion_valida = opcion_2 > 0 && opcion_2 <= REGRESAR_INICIO;
    }
}

void procesar_opcion_2(int opcion_2, Lista<Animal>* lista_animales)
{
    switch(opcion_2){
        case ELEGIR_INDIVIDUALMENTE:
            system("pause");
            break;
        case ALIMENTAR_TODOS:
            alimentar_todos_animales(lista_animales);
            //system("pause");
            break;
        case BANIO_TODOS:
            banio_todos(lista_animales);
            //system("pause");
            break;
        case REGRESAR_INICIO:
            break;
    }
}