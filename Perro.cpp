#include "Perro.h"


#include <iostream>
using namespace std;



Perro:: Perro(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad) : Animal(_nombre,_edad,_tamanio,_especie)
{

    personalidad = _personalidad;
}

void Perro::ensuciar()
{

    if (personalidad=="Sociable")
    {
        higiene = higiene - 5;
    }
    else if (personalidad == "Travieso")
    {
        higiene = higiene + 20;
    }
    else
    {

        Animal::ensuciar();
    }
}

void Perro ::gastar_energia()
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
