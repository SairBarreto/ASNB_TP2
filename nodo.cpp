#include "nodo.h"

//Constructor
Nodo::Nodo(Dato dato) 
{
    this->dato = dato;
    this->siguiente = 0;
}

//Cambiar siguiente
void Nodo::cambiar_siguiente_nodo(Nodo<Dato>* ptr) 
{
    this->siguiente = ptr;
}

//Obtener dato
Dato Nodo::obtener_dato() 
{
    return dato;
}

//Obtener siguiente
Nodo* Nodo::obtener_siguiente_nodo() 
{
    return siguiente;
}