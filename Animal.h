#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;
//nombre,edad,tama�o,especie,personalidad
class Animal
{
    protected:
        string nombre;
        int edad;
        string tamanio;
        string especie;
        string personalidad;

    public:
        Animal(string nombre, int edad, string tamanio, string especie,string personalidad);
        virtual void ensuciar();
        virtual void gastar_energia();//aumenta niveles de hambre
        void baniar();
        void alimentar();
        int get_higiene();
        int get_hambre();
        int hambre;
        int higiene;
        string obtener_nombre();
        int obtener_higiene();
        int obtener_hambre();
        string obtener_personalidad();
        virtual ~Animal(){};
        //Para la opcion 4
        string obtener_tamanio();
        int obtener_edad();
        string obtener_especie();


};

#endif // ANIMAL_H
