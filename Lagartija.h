#ifndef LAGARTIJA_H
#define LAGARTIJA_H

#include "Animal.h"


class Lagartija : public Animal
{

    public:
        Lagartija(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void set_lagartija(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void gastar_energia();//aumenta niveles de hambre
        void ensuciar();
};

#endif // LAGARTIJA_H
