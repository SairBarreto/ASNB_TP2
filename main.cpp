#include <iostream>
#include <string>

#include "lista.h"
#include "animal.h"
//#include "gato.h"

using namespace std;

int main()    
{
    Lista<Animal> *l = new Lista<Animal>;

    Animal* gato = new Animal("membrillo", 1, "chico", "gato");

    l->agregar_nodo(gato);
    //Animal* perro = l->obtener_actual_dato();
    cout << gato->mostrar_nombre() << endl;
    
    l->borrar_nodo_actual();

    delete l;

    return 0;
}