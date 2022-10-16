#include <iostream>
#include <string>

using namespace std;

int procesar_opcion();

int main()    
{
    string nombre = "Sair";

    cout << "Hola " << nombre << endl;

    return 0;
}

int procesar_opcion()
{
    int opcion;

    cout << "Opcion: ";
    cin >> opcion;

    return opcion;
}