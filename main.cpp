#include <iostream>
#include <string>

using namespace std;

int opcion_elegida();

int main()    
{
    string nombre = "Sair";

    cout << "Hola " << nombre << endl;

    return 0;
}

int opcion_elegida()
{
    int opcion;

    cout << "Opcion: ";
    cin >> opcion;

    return opcion;
}