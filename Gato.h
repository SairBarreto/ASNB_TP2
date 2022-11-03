#ifndef GATO_H
#define GATO_H

#include "Animal.h"

#include <iostream>

using namespace std;

class Gato : public Animal
{
    private:
        string personalidad;
    public:

        
        Gato(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);

        //PRE: -    
        //POS: Carga y crea objeto Gato
        void set_gato(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad);
        
        //PRE: -    
        //POS: Gasta energia dependiendo de su personalidad
        void gastar_energia();
        
        //PRE: -    
        //POS: Se ensucia dependiendo de su personalidad
        void ensuciar();



};

#endif // GATO_H
