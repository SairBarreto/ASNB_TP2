#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;
//nombre,edad,tamaño,especie,personalidad
class Animal
{
    private:
        string nombre;
        int edad;
        string tamanio;
        string especie;

    public:
        //
        //
        Animal(string _nombre, int _edad, string _tamanio, string _especie);

        //
        //
        virtual void ensuciar();

        //
        //
        virtual void gastar_energia();//aumenta niveles de hambre

        //
        //
        void baniar();

        //
        //
        void alimentar();

        //
        //
        int get_higiene();

        //
        //
        int get_hambre();

        //
        //
        virtual string mostrar_nombre();

        int hambre;
        int higiene;
};

#endif // ANIMAL_H