#ifndef ERIZO_H
#define ERIZO_H

#include "Animal.h"


class Erizo : public Animal
{

    public:
        Erizo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void set_erizo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void ensuciar();
        void gastar_energia();//aumenta niveles de hambre
};

#endif // ERIZO_H
