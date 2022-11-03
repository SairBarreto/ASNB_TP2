#ifndef GATO_H
#define GATO_H

#include "Animal.h"

#include <iostream>

using namespace std;

class Gato : public Animal
{

    public:
        Gato(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void set_gato(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void gastar_energia();//aumenta niveles de hambre
        void ensuciar();

};

#endif // GATO_H
