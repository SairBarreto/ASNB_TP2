#include "gato.h"

Gato::Gato(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad): Animal(_nombre,_edad,_tamanio,_especie)
{
    personalidad = _personalidad;
}


void Gato::gastar_energia()
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

string Gato::mostrar_nombre()
{
    Animal::mostrar_nombre();
}