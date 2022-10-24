#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"


class Lista {

    //Atributos
    private:

        Nodo* nodo_primero;
        Nodo* nodo_actual;
        //Nodo* nodo_anterior;
        int cantidad;

    //Metodos
    public:

        //PRE: -
        //POS:
        Lista();

        //PRE: 0 < pos <= cantidad + 1
        //POS: Agrega dato en la posicion indicada (la primera es la 1)
        void agregar_nodo(Dato dato, int posicion);

        //PRE: 0 < pos <= cantidad
        //POS: Devuelve el dato que esta en la posicion pos (empieza en 1)
        //Dato* obtener_actual_dato(int posicion);

        //PRE: -
        //POS: True si la Lista esta vacia, F si no
        bool vacia();

        //PRE: -
        //POS: 
        //void pasar_nodo();

        //PRE: -
        //POS: Da de baja el dato que esta en la posicion indicada (empieza en 1)
        void borrar_nodo(int posicion);

        //PRE: -
        //POS:
        //Nodo* obtener_primer_nodo();

        //PRE: -
        //POS:
        Dato consulta(int posicion);

        //PRE: -
        //POS: Devuelve la cantidad elementos
        int obtener_cantidad();

        //PRE: -
        //POS: True si hay algún dato más en la lista, False si la lista es vacía o si llegué al final de la lista
        bool hay_siguiente_nodo();

        //PRE: -
        //POS:
        //void iniciar_nodo_actual();

        //Destructor
        ~Lista();

    private:
        //PRE: -
        //POS: Devuelve un ptr al nodo que esta en posicion
        Nodo* obtener_nodo(int posicion);
};

#endif //LISTA_H_INCLUDED