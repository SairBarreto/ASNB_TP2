#include "lista.h"
/*
//Constructor
template <typename Dato>
Lista<Dato>::Lista() {
    nodo_primero = 0;
    nodo_actual = nodo_primero;
    cantidad = 0;
}

//Alta
template <typename Dato>
void Lista<Dato>::agregar_nodo(Dato dato) {
    Nodo<Dato>* nodo_nuevo = new Nodo<Dato>(dato);
    nodo_nuevo->cambiar_siguiente(nodo_primero);
    nodo_primero = nodo_nuevo;
    cantidad++;
    iniciar_nodo_actual();
}

//Volver al principio al nodo actual
template <typename Dato>
void Lista<Dato>::iniciar_nodo_actual() {
    nodo_actual = nodo_primero;
}

//Consulta el dato del nodo actual
template <typename Dato>
Dato* Lista<Dato>::obtener_actual_dato(){
    if(nodo_actual != 0)
        return nodo_actual->obtener_dato;
}

//Borrar nodo actual
template <typename Dato>
void Lista<Dato>::borrar_nodo_actual() {
    //nodo actual es el primero
    if(nodo_actual == nodo_primero) {
        nodo_primero = nodo_primero->obtener_siguiente();
        delete nodo_actual;
    }
    //nodo actual no es el primero
    else {
        nodo_anterior->cambiar_siguiente(nodo_actual->obtener_siguiente_nodo());
        delete nodo_actual;
    }
    iniciar_nodo_actual();
}

//Destructor
template <typename Dato>
Lista<Dato>::~Lista() {
    while(nodo_primero != 0) {
        Nodo<Dato>* aux = nodo_primero->obtener_siguiente_nodo();
        delete nodo_primero;
        nodo_primero = aux;
    }
}


//Revisa si apunta a nulo el nodo actual
template <typename Dato>
bool Lista<Dato>::es_nulo_nodo_actual() {
    return nodo_actual == 0;
}

//Mueve el nodo actual al siguiente
template <typename Dato>
void Lista<Dato>::pasar_nodo() {
    nodo_anterior = nodo_actual;
    nodo_actual = nodo_actual->obtener_siguiente_nodo();
}

//Devuelve el primer nodo
template <typename Dato>
Nodo<Dato>* Lista<Dato>::obtener_primer_nodo() {
    return nodo_primero;
}

//Verifica si hay un nodo siguiente
template <typename Dato>
bool Lista<Dato>::hay_siguiente_nodo() {
    return (nodo_actual->obtener_siguiente_nodo() != 0);
}

//Obtener cantidad
template <typename Dato>
int Lista<Dato>::obtener_cantidad() {
    return cantidad;
}*/