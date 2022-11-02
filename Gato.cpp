#include "Gato.h"



Gato::Gato(string _nombre, int _edad, string _tamanio, string _especie, string _personalidad): Animal(_nombre,_edad,_tamanio,_especie,_personalidad)
{

}



void Gato::gastar_energia()
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
