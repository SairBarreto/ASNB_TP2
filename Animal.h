#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;
//nombre,edad,tama�o,especie,personalidad
class Animal
{
    private:
        string nombre;
        int edad;
        string tamanio;
        string especie;

    public:
        Animal(string nombre, int edad, string tamanio, string especie);
        virtual void ensuciar();
        virtual void gastar_energia();//aumenta niveles de hambre
        void baniar();
        void alimentar();
        int get_higiene();
        int get_hambre();
        int hambre;
        int higiene;
        string obtener_nombre();


};

#endif // ANIMAL_H
