#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

using namespace std;

template <typename Dato>
class Nodo {

private:
    //Atributos
    Dato dato;
    Nodo* siguiente;

public:
    //Metodos

    //PRE: -
    //POS: Crea un nodo con dato = d y siguiente = 0; 
    Nodo(Dato dato);


    //PRE: -
    //POS:
    void cambiar_siguiente(Nodo* ptr);


    //PRE: -
    //POS:
    Dato obtener_dato();


    //PRE: -
    //POS:
    Nodo* obtener_siguiente();


};


#endif // NODO_H_INCLUDED