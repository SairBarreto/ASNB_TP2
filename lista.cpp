#include "lista.h"

//Constructor
Lista::Lista() 
{
    nodo_primero = 0;
    cantidad = 0;
    nodo_actual = nodo_primero;
}

//Alta
void Lista::agregar_nodo(Dato dato, int posicion) 
{
	Nodo* nodo_nuevo = new Nodo(dato);
    Nodo* nodo_siguiente = nodo_primero;
    
	if (posicion == 1) {
        nodo_primero = nodo_nuevo;
    }
    else {
        Nodo* nodo_anterior = obtener_nodo(posicion - 1);
        nodo_siguiente = nodo_anterior->obtener_siguiente();
        nodo_anterior->cambiar_siguiente(nuevo);
    }
    
	nodo_nuevo->cambiar_siguiente(siguiente);
    cantidad++;
}

/*/Volver al principio al nodo actual
void Lista<Dato>::iniciar_nodo_actual() {
    nodo_actual = nodo_primero;
}*/

/*/Consulta el dato del nodo actual
Dato* Lista::obtener_actual_dato(){
    if(nodo_actual != 0)
        return nodo_actual->obtener_dato();
}*/

//Revisa si hay elementos en la lista
bool Lista::vacia() 
{
    return (cantidad == 0);
}

//Borrar nodo que esta en posicion
void Lista::borrar_nodo(int posicion) 
{
	Nodo* borrar_nodo = nodo_primero;
    
	if (posicion == 1) {
        nodo_primero = borrar_nodo->obtener_siguiente();
    }
    else {
        Nodo* nodo_anterior = obtener_nodo(posicion - 1);
        borrar_nodo = nodo_anterior->obtener_siguiente();
        nodo_anterior->cambiar_siguiente(borrar_nodo->obtener_siguiente());
    }
    
	delete borrar_nodo;
    cantidad--;
}

/*/Mueve el nodo actual al siguiente
void Lista<Dato>::pasar_nodo() {
    nodo_anterior = nodo_actual;
    nodo_actual = nodo_actual->obtener_siguiente_nodo();
}*/

/*/Devuelve el primer nodo
Nodo<Dato>* Lista<Dato>::obtener_primer_nodo() {
    return nodo_primero;
}*/

//Consulta
Dato Lista::consulta(int posicion) 
{
    
	Nodo* nodo = obtener_nodo(posicion);
    
	return (nodo->obtener_dato());
}

//Obtener cantidad
int Lista::obtener_cantidad() 
{
    return cantidad;
}

//Verifica si hay un nodo siguiente
bool Lista::hay_siguiente_nodo() 
{
    return (nodo_actual != 0);
}

//Destructor
Lista::~Lista() 
{
    while (! vacia())
        borrar_nodo(1);
}