#ifndef MENU_H
#define MENU_H 

#include "Lista.h"
#include "Animal.h"

enum{
    LISTAR_ANIMALES = 1,
    RESCATAR_ANIMAL,
    BUSCAR_ANIMAL,
    CUIDAR_ANIMAL,
    ADOPTAR_ANIMAL,
    SALIR,
    CANTIDAD_DE_OPCIONES
};

enum{
    ELEGIR_INDIVIDUALMENTE = 1,
    ALIMENTAR_TODOS,
    BANIO_TODOS,
    REGRESAR_INICIO
};

void mostrar_menu();

int menu_pedir_opcion();

void menu_validar_opcion(int &opcion);

void procesar_opcion(int opcion, Lista<Animal>* lista_animales);

void mostrar_todos_los_animales();

void mostrar_todos_los_animales();

void mostrar_menu_2();

void verificar_opcion_2(int opcion_2);

void procesar_opcion_2(int opcion);

#endif