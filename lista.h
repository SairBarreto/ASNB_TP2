#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

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
    //POS:
    Lista();

    //PRE: -
    //POS:
    void agregar_nodo(Dato dato);

    //PRE: -
    //POS:
    Dato* obtener_actual_dato();

    //PRE: -
    //POS:
    bool es_nulo_nodo_actual();

    //PRE: -
    //POS:
    void pasar_nodo();

    //PRE: -
    //POS:
    void borrar_nodo_actual();

    //PRE: -
    //POS:
    Nodo<Dato>* obtener_primer_nodo();

    //PRE: -
    //POS:
    Dato consulta(int pos);

    //PRE: -
    //POS:
    int obtener_cantidad();

    //PRE: -
    //POS:
    bool hay_siguiente_nodo();

    //PRE: -
    //POS:
    void iniciar_nodo_actual();

    //PRE: -
    //POS:
    ~Lista();

private:
    //PRE: -
    //POS:
    Nodo<Dato>* obtener_nodo_primero(int pos);

};




#endif //LISTA_H_INCLUDED