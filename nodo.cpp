#include "nodo.h"

//Constructor
template <typename Dato>    
Nodo<Dato>::Nodo(Dato dato) {
    this->dato = dato;
    this->siguiente = 0;
}

//Cambiar siguiente
template <typename Dato>
void Nodo<Dato>::cambiar_siguiente(Nodo* ptr) {
    this->siguiente = ptr;
}

//Obtener siguiente
template <typename Dato>
Nodo<Dato>* Nodo<Dato>::obtener_siguiente() {
    return siguiente;
}

//Obtener dato
template <typename Dato>
Dato Nodo<Dato>::obtener_dato() {
    return dato;
}