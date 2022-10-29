#include "Lagartija.h"

Lagartija::Lagartija(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad) : Animal(_nombre,_edad,_tamanio,_especie)
{
    personalidad = _personalidad;
}

/*void Lagartija::set_roedor(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad)
{

}*/

void Lagartija::gastar_energia()
{
    if (personalidad == "Dormilon")
    {
        hambre = hambre + 5;
    }
    else if (personalidad == "Jugueton")
    {
        hambre = hambre + 20;
    }
    else
    {
        Animal::gastar_energia();
    }
}


