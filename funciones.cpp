#include <iostream>

void leer_archivo(){
    Animal animal;
    char delimitador = ','; //El delimitador tiene que de tipo char con string no funciona 
    ifstream archivo("animales.csv", ios::in);

    if(archivo.is_open()){

        while(!archivo.eof())
        {
            getline(archivo, animal.nombre, delimitador);
            getline(archivo, animal.edad, delimitador);
            getline(archivo, animal.tamanio, delimitador);
            getline(archivo, animal.especie, delimitador);
            getline(archivo, animal.personalidad, '\n');

            cout << animal.nombre << "," << animal.edad << "," << animal.tamanio << "," << animal.especie << "," << animal.personalidad << endl;
        }
    }
    else{
        cout << "No se pudo abrir el archivo" << endl;
    }
}