#include <iostream>

#include "Lista.h"
#include "Animal.h"
#include "animal_handler.h"
#include "menu.h"

using namespace std;


int main()
{
    Lista<Animal>* lista_animales = new Lista<Animal>;
    int opcion = 0;

    leer_archivo(lista_animales);

    mostrar_menu();
    opcion = menu_pedir_opcion();
    
    while(opcion != SALIR) {
        procesar_opcion(opcion, lista_animales);
        mostrar_menu();
        opcion = menu_pedir_opcion();
        menu_validar_opcion(opcion);
    }

    delete lista_animales;

    return 0;
}
