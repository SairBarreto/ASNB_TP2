#include "Caballo.h"

Caballo::Caballo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad): Animal(_nombre,_edad,_tamanio,_especie)
{
    personalidad = _personalidad;
}

/*void Caballo::set_caballo(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad)
{

}
*/
void Caballo::ensuciar()
{
    int nuevo_higiene;
    if (personalidad=="Sociable")
    {
        nuevo_higiene = higiene - 5;
        if(nuevo_higiene <= 0)
            higiene = 0;
        else
            higiene = nuevo_higiene;
    }
    else if (personalidad == "Travieso")
    {
        nuevo_higiene = higiene + 20;
        if(nuevo_higiene <= 0)
            higiene = 0;
        else
            higiene = nuevo_higiene;
    }
    else
    {
        Animal::ensuciar();
    }
}


void Caballo::gastar_energia()
{
    int nuevo_hambre;
    if (personalidad == "Dormilon")
    {
        nuevo_hambre = hambre + 5;
        if(nuevo_hambre >= 100)
            hambre = 100;
        else
            hambre = nuevo_hambre;
    }
    else if (personalidad == "Jugueton")
    {
        nuevo_hambre = hambre + 20;
        if(nuevo_hambre >= 100)
            hambre = 100;
        else
            hambre = nuevo_hambre;
    }
    else
    {
        Animal::gastar_energia();
    }
}
