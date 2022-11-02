#ifndef CONEJO_H
#define CONEJO_H

#include "Animal.h"


class Conejo : public Animal
{

    public:
        Conejo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void set_conejo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void ensuciar();
        void gastar_energia();//aumenta niveles de hambre


};

#endif // CONEJO_H
