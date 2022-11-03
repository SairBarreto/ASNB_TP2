#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "Nodo.h"

template <typename Dato>
class Lista {

//Atributos
private:

    Nodo<Dato>* nodo_primero;
    Nodo<Dato>* nodo_actual;
    Nodo<Dato>* nodo_anterior;
    int cantidad;

//Metodos
public:

    //PRE: -
    //POS: Construye una lista con nodo actual nulo
    Lista();

    //PRE: Debe existir una lista y Dato debe ser valido
    //POS: Carga un nodo en la lista con los dato proporcionados y genera el siguiente en 0
    void agregar_nodo(Dato* dato);

    //PRE: -
    //POS: Obtiene el Dato del nodo actual de la lista
    Dato* obtener_actual_dato();

    //PRE: -
    //POS: Revisa si esta apuntando a nulo el nodo actual y retorna booleano
    bool es_nulo_nodo_actual();

    //PRE: -
    //POS: Puntero "Nodo anterior" pasa a apuntar a el valor del Nodo actual y puntero "Nodo actual" busca a el siguiente nodo
    void pasar_nodo();

    //PRE: -
    //POS: Borra nodo actual indipendientemente de la posicion e inicia nodo actual
    void borrar_nodo_actual();

    //PRE: -
    //POS: Retorna el primer nodo
    Nodo<Dato>* obtener_primer_nodo();

    //PRE: -
    //POS: Retorna la cantidad
    int obtener_cantidad();


    //PRE: -
    //POS: Nodo anterior nulo y Nodo actual primero
    void iniciar_nodo_actual();

    //PRE: -
    //POS: Destructor 
    ~Lista();

};


//Constructor
template <typename Dato>
Lista<Dato>::Lista() {
    nodo_primero = 0;
    nodo_actual = 0;
    nodo_anterior = 0;
    cantidad = 0;
}

//Alta
template <typename Dato>
void Lista<Dato>::agregar_nodo(Dato* dato) {
    Nodo<Dato>* nodo_nuevo = new Nodo<Dato>(dato);
    nodo_nuevo->cambiar_siguiente_nodo(nodo_primero);
    nodo_primero = nodo_nuevo;
    cantidad++;
    iniciar_nodo_actual();
}

//Volver al principio al nodo actual
template <typename Dato>
void Lista<Dato>::iniciar_nodo_actual() {
    nodo_anterior = 0;
    nodo_actual = nodo_primero;
}

//Consulta el dato del nodo actual
template <typename Dato>
Dato* Lista<Dato>::obtener_actual_dato(){
    if(nodo_actual != 0)
        return nodo_actual->obtener_dato();
    return 0;
}

//Borrar nodo actual
template <typename Dato>
void Lista<Dato>::borrar_nodo_actual() {
    //nodo actual es el primero
    if(nodo_actual == nodo_primero) {
        nodo_primero = nodo_primero->obtener_siguiente_nodo();
        cantidad--; 
        delete nodo_actual;
    }
    //nodo actual no es el primero
    else {
        nodo_anterior->cambiar_siguiente_nodo(nodo_actual->obtener_siguiente_nodo());
        cantidad--;
        delete nodo_actual;
    }
    //cantidad--; //
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

//Obtener cantidad
template <typename Dato>
int Lista<Dato>::obtener_cantidad() {
    return cantidad;
}

#endif //LISTA_H_INCLUDED