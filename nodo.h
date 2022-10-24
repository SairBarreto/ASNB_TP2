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

//Constructor
template <typename Dato>    
Nodo<Dato>::Nodo(Dato dato) {
    this->dato = dato;
    this->siguiente = 0;
}

//Cambiar siguiente
template <typename Dato>
void Nodo<Dato>::cambiar_siguiente_nodo(Nodo<Dato>* ptr) {
    this->siguiente = ptr;
}

//Obtener siguiente
template <typename Dato>
Nodo<Dato>* Nodo<Dato>::obtener_siguiente_nodo() {
    return siguiente;
}

//Obtener dato
template <typename Dato>
Dato Nodo<Dato>::obtener_dato() {
    return dato;
}


#endif // NODO_H_INCLUDED