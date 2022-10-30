#include <iostream>

#include "lista.h"
#include "Animal.h"
#include "Perro.h"

using namespace std;

int main()
{
    Animal *vector_1[3];

    vector_1[0] = new Perro("chichita",1,"p","p","Dormilon");

    Lista<Animal> *l = new Lista<Animal>;

    Animal* gato_1 = new Animal("membrillo", 1, "p", "g");

    l->agregar_nodo(gato_1);

    cout << l->obtener_actual_dato()->obtener_nombre() << endl;
    //l->borrar_nodo_actual();

    //delete l;


    cout<<vector_1[0]->get_hambre()<<endl;

    vector_1[0]->gastar_energia();


    cout<<vector_1[0]->get_hambre()<<endl;


   /*
    cout<<animalito.get_hambre()<<endl;
    animalito.gastar_energia();
    animalito.alimentar();

    cout<<animalito.get_hambre()<<endl;

    animalito.gastar_energia();



    cout<<animalito.get_hambre()<<endl;

    Perro perrito("sonny",1,"d","p","Dormilon");

    cout<<"Empieza sonny"<<endl;*/








    return 0;
}

/*Lista<Animal> *l = new Lista<Animal>;

    Animal* gato = new Animal("membrillo", 1, "chico");

    l->agregar_nodo(gato);
    Animal* perro = l->obtener_actual_dato();
    cout << perro->mostrar_nombre() << endl;
    l->borrar_nodo_actual();

    delete l;

    return 0;
*/