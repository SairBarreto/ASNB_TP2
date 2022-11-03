#ifndef CABALLO_H
#define CABALLO_H

#include "Animal.h"


class Caballo : public Animal
{

    public:
        Caballo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        
        //PRE: -    
        //POS: Carga y crea objeto Caballo
        void set_caballo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        
        //PRE: -    
        //POS: Gasta higiene dependiendo de su personalidad
        void ensuciar();

        //PRE: -    
        //POS: Aumenta hambre dependiendo de su personalidad
        void gastar_energia();//aumenta niveles de hambre


};

#endif // CABALLO_H