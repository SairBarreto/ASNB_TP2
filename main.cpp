#include <iostream>
#include <string>

#include "lista.h"

int main()    
{
    Lista<char> l;
    l.agregar_nodo('P');
    l.agregar_nodo('T');
    l.agregar_nodo('A');
    l.agregar_nodo('O');

    cout << "Cantidad de elementos: " << l.obtener_cantidad() << endl;
    for (int i = 1; i <= l.obtener_cantidad(); i++) {
        cout << l.obtener_actual_dato() << endl;
        l.pasar_nodo();
    }

    //~Lista l;


    return 0;
}