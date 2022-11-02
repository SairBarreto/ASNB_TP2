#include "Caballo.h"

Caballo::Caballo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad): Animal(_nombre,_edad,_tamanio,_especie,_personalidad)
{

}

/*void Caballo::set_caballo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad)
{

}
*/
void Caballo::ensuciar()
{
    string personalidad_obtenida;
    personalidad_obtenida = obtener_personalidad();

        if (personalidad_obtenida=="Sociable")
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


void Caballo::gastar_energia()
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
