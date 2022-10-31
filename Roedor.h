#ifndef ROEDOR_H
#define ROEDOR_H

#include "Animal.h"


class Roedor : public Animal
{
     private:
        string personalidad;
    public:
        Roedor(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void set_roedor(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void gastar_energia();//aumenta niveles de hambre


};

#endif // ROEDOR_H
