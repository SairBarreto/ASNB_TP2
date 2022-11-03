#ifndef LAGARTIJA_H
#define LAGARTIJA_H

#include "Animal.h"


class Lagartija : public Animal
{
  private:
        string personalidad;
    public:
        Lagartija(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        
        //PRE: -    
        //POS: Carga y crea objeto Lagartija
        void set_lagartija(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        
        //PRE: -    
        //POS: Gasta energia y aumenta hambre dependiendo de su personalidad
        void gastar_energia();

        //PRE: -    
        //POS: Gasta higiene dependiendo de su personalidad
        void ensuciar();
};

#endif // LAGARTIJA_H
