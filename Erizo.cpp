#include "Erizo.h"

Erizo::Erizo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad):Animal(_nombre,_edad,_tamanio,_especie)
{
    personalidad = _personalidad;
}

void Erizo::ensuciar()
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


void Erizo::gastar_energia()
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


