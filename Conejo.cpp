#include "Conejo.h"

Conejo::Conejo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad):Animal(_nombre,_edad,_tamanio,_especie,_personalidad)
{

}

/*void Conejo::set_conejo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad)
{

}*/

void Conejo::gastar_energia()
{
    string personalidad_obtenida;
    personalidad_obtenida = obtener_personalidad();
     if (personalidad_obtenida == "Dormilon")
    {
        hambre = hambre + 5;
    }
    else if (personalidad_obtenida == "Jugueton")
    {
        hambre = hambre + 20;
    }
    else
    {
        Animal::gastar_energia();
    }
}

void Conejo::ensuciar()
{
    string personalidad_obtenida;
    personalidad_obtenida = obtener_personalidad();

    if (personalidad_obtenida == "Sociable")
    {
        higiene = higiene - 5;
    }
    else if (personalidad_obtenida == "Travieso")
    {
        higiene = higiene + 20;
    }
    else
    {

        Animal::ensuciar();
    }

}
