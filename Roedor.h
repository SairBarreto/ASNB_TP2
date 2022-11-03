#ifndef ROEDOR_H
#define ROEDOR_H

#include "Animal.h"


class Roedor : public Animal
{
     private:
        string personalidad;
    public:
        Roedor(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        
        //PRE: -    
        //POS: Crea y carga el onjeto Roedor
        void set_roedor(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        
        //PRE: -    
        //POS: Gasta energia y aumenta hambre dependiendo de su personalidad
        void gastar_energia();//aumenta niveles de hambre
        
        //PRE: -    
        //POS: Gasta higiene dependiendo de su personalidad 
        void ensuciar();

};

#endif // ROEDOR_H
