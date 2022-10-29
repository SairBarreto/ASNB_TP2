#ifndef LAGARTIJA_H
#define LAGARTIJA_H

#include <Animal.h>


class Lagartija : public Animal
{
  private:
        string personalidad;
    public:
        Lagartija(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void set_lagartija(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        void gastar_energia();//aumenta niveles de hambre
};

#endif // LAGARTIJA_H
