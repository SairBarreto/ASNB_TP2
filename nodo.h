#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

#include <iostream>

using namespace std;

template <typename Dato>
class Nodo {

//Atributos
private:
    
    Dato dato;
    Nodo* siguiente;

//Metodos
public:

    //PRE: -
    //POS: Crea un nodo con dato = d y siguiente = 0; 
    Nodo(Dato dato);

    //PRE: -
    //POS:
    void cambiar_siguiente_nodo(Nodo<Dato>* ptr);

    //PRE: -
    //POS:
    Dato obtener_dato();

    //PRE: -
    //POS:
    Nodo* obtener_siguiente_nodo();

};


#endif // NODO_H_INCLUDED