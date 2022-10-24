#include <iostream>
#include <string>

#include "lista.h"

using namespace std;

int main()    
{
    Lista<int> l;
    int x = 0;
    l.agregar_nodo(x);


    cout << "Cantidad de elementos: " << l.obtener_cantidad() << endl;
    for (int i = 1; i <= l.obtener_cantidad(); i++) {
        cout << l.consulta() << endl;
        l.pasar_nodo();
    }    
    //~Lista l;


    return 0;
}