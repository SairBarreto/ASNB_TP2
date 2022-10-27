#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

//template <typename Dato>

struct Animal{
    string nombre;
    int edad;
    string tamanio;
    string especie;
    string personalidad;
};

typedef Animal Dato;

class Nodo{
    //Atributos
    private:
        
        Dato dato;
        Nodo* siguiente;

    //Metodos
    public:

        //PRE: -
        //POS: Crea un nodo con this->dato = dato y siguiente = 0; 
        Nodo(Dato dato);

        //PRE: -
        //POS:
        void cambiar_siguiente_nodo(Nodo* ptr);

        //PRE: -
        //POS:
        Dato obtener_dato();

        //PRE: -
        //POS:
        Nodo* obtener_siguiente_nodo();
};


#endif // NODO_H_INCLUDED