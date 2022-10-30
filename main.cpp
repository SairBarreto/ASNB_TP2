#include <iostream>

#include "lista.h"
#include "Animal.h"
#include "Perro.h"

using namespace std;

int main()
{
    Lista<Animal> *l = new Lista<Animal>;

    Animal* gato_1 = new Animal("membrillo", 1, "p", "g");

    l->agregar_nodo(gato_1);

    cout << l->obtener_actual_dato()->obtener_nombre() << endl;
    l->borrar_nodo_actual();

    delete l;

    return 0;
}
