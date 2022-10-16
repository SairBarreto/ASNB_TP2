#include <iostream>
#include <string>

using namespace std;

void menu();

int main()    
{
    menu();

    return 0;
}

void menu()
{
    cout << "\tMenu" << endl;
    cout << "1.Listar animales" << endl;
    cout << "2.Rescatar animal" << endl;
    cout << "3.Buscar animal" << endl;
    cout << "4.Cuidar animales" << endl;
    cout << "5.Adoptar animal" << endl;
    cout << "6.Guardar y salir" << endl;
}