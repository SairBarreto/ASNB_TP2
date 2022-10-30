#include "nodo.h"

//Constructor
template <typename Dato>    
Nodo<Dato>::Nodo(Dato* dato) {
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
Dato* Nodo<Dato>::obtener_dato() {
    return dato;
}

//Cambia el valor del dato
template <typename Dato>
void Nodo<Dato>::cambiar_nuevo_dato(Dato nuevo_dato) {
    this->dato = nuevo_dato;
}

//Proximo nodo no nulo
template <typename Dato>
bool Nodo<Dato>::es_no_nulo_proximo_nulo() {
    return (siguiente != 0);
}

//Destructor
template <typename Dato>
Nodo<Dato>::~Nodo() {
    delete dato;
}