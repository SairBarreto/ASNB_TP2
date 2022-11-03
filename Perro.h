#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"

#include <iostream>

using namespace std;

class Perro : public Animal
{

    public:
        Perro(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void set_perro(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void ensuciar();
        void gastar_energia();//aumenta niveles de hambre


};

#endif // PERRO_H
