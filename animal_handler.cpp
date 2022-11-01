#include <iostream>
#include <fstream>
#include "animal_handler.h"
#include "Caballo.h"
#include "Conejo.h"
#include "Erizo.h"
#include "Gato.h"
#include "Lagartija.h"
#include "Perro.h"
#include "Roedor.h"


using namespace std;

void leer_archivo(Lista<Animal>* lista_animales){

    string nombre, edad_str, tamanio_str, especie_str, personalidad_str;
    char delimitador = ','; //El delimitador tiene que de tipo char con string no funciona
    ifstream archivo(PATH_ANIMALES, ios::in);

    if(!archivo.is_open()){
        cout << "No se encontro un archivo con nombre \"" << PATH_ANIMALES << "\", se va a crear el archivo" << endl;
        archivo.open(PATH_ANIMALES, ios::out);
        archivo.close();
        archivo.open(PATH_ANIMALES, ios::in);
    }

    if(archivo.is_open()){

        while(getline(archivo,nombre, delimitador))
        {
            getline(archivo, edad_str, delimitador);
            getline(archivo, tamanio_str, delimitador);
            getline(archivo, especie_str, delimitador);
            getline(archivo, personalidad_str, '\n');

            switch(string_a_especie_t(especie_str)) {

                case CABALLO:
                    {
                    Caballo* caballo = new Caballo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(caballo);
                    break;
                    }

                case CONEJO:
                    {
                    Conejo* conejo = new Conejo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(conejo);
                    break;
                    }

                case ERIZO:
                    {
                    Erizo* erizo = new Erizo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(erizo);
                    break;
                    }

                case GATO:
                    {
                    Gato* gato = new Gato(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(gato);
                    break;
                    }

                case LAGARTIJA:
                    {
                    Lagartija* lagartija = new Lagartija(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(lagartija);
                    break;
                    }

                case PERRO:
                    {
                    Perro* perro = new Perro(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(perro);
                    break;
                    }

                case ROEDOR:
                    {
                    Roedor* rata = new Roedor(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(rata);
                    break;
                    }

                default:
                    break;
            }
        }
    }
    else{
        cout << "No se pudo abrir el archivo" << endl;
    }


    archivo.close();

}

void agregar_nodo_a_lista(Lista<Animal>* lista_animales, string nombre, string edad_str, string tamanio_str, string especie_str, string personalidad_str)
{

    switch(string_a_especie_t(especie_str)) {

                case CABALLO:
                    {
                    Caballo* caballo = new Caballo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(caballo);
                    break;
                    }

                case CONEJO:
                    {
                    Conejo* conejo = new Conejo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(conejo);
                    break;
                    }

                case ERIZO:
                    {
                    Erizo* erizo = new Erizo(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(erizo);
                    break;
                    }

                case GATO:
                    {
                    Gato* gato = new Gato(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(gato);
                    break;
                    }

                case LAGARTIJA:
                    {
                    Lagartija* lagartija = new Lagartija(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(lagartija);
                    break;
                    }

                case PERRO:
                    {
                    Perro* perro = new Perro(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(perro);
                    break;
                    }

                case ROEDOR:
                    {
                    Roedor* rata = new Roedor(nombre, stoi(edad_str), tamanio_str, especie_str, personalidad_str);
                    lista_animales->agregar_nodo(rata);
                    break;
                    }

                default:
                    break;
            }
}

void listar_animales(Lista<Animal>* lista_animales) {

    cout << "Animales en la Reserva:" << endl;

    for(int i = 0; i < lista_animales->obtener_cantidad(); i++) {
        cout << "\t -" << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;

        lista_animales->pasar_nodo();
    }

    lista_animales->iniciar_nodo_actual();
}
//nuevo anto
bool verificar_nombre(Lista<Animal>* lista_animales,string nombre_ingresado)
{
    bool existe_nombre = false;

    for(int i = 0; i < lista_animales->obtener_cantidad(); i++) {
        if(lista_animales->obtener_actual_dato()->obtener_nombre() == nombre_ingresado)
        {
            existe_nombre = true;

        }
        lista_animales->pasar_nodo();
    }

    lista_animales->iniciar_nodo_actual();


    return existe_nombre;
}


string elegir_especie()
{
    cout<<"\tESPECIE DEL ANIMAL"<<endl;
    int opcion_elegida=0;

    cout<<"Seleccione la especie: "<<endl;

        cout<<"1. Caballo"<<endl;
        cout<<"2. Conejo"<<endl;
        cout<<"3. Erizo"<<endl;
        cout<<"4. Gato"<<endl;
        cout<<"5. Lagartija"<<endl;
        cout<<"6. Perro"<<endl;
        cout<<"7. Roedor"<<endl;

        cout<<"Ingrese el numero de la opcion elegida: "<<endl;
        cin>>opcion_elegida;


    while(opcion_elegida>7 || opcion_elegida<1 )
    {


        cout<<"la opcion ingresada no es correcta, intente nuevamente"<<endl;

        cout<<"1. Caballo"<<endl;
        cout<<"2. Conejo"<<endl;
        cout<<"3. Erizo"<<endl;
        cout<<"4. Gato"<<endl;
        cout<<"5. Lagartija"<<endl;
        cout<<"6. Perro"<<endl;
        cout<<"7. Roedor"<<endl;

        cout<<"Ingrese el numero de la opcion elegida: "<<endl;
        cin>>opcion_elegida;

    }

    opcion_elegida = opcion_elegida - 1;
    return ESPECIES_STR[opcion_elegida];

}

string elegir_personalidad()
{
    cout<<"\tPERSONALIDAD DEL ANIMAL"<<endl;
    int opcion_elegida=0;

    for(int i=0;i<4;i++)
        {
            cout<<i+1<<". "<<PERSONALIDADES[i]<<endl;
        }
    cout<<"Seleccione la personalidad: "<<endl;
    cin>>opcion_elegida;
    while(opcion_elegida>4 || opcion_elegida<1 )
    {
        cout<<"La opcion ingresada no es correcta. Intentelo nuevamente."<<endl;

        for(int i=0;i<4;i++)
        {
            cout<<i+1<<". "<<PERSONALIDADES[i]<<endl;
        }

        cout<<"Seleccione la personalidad: "<<endl;
        cin>>opcion_elegida;

    }

    opcion_elegida = opcion_elegida - 1;

    return PERSONALIDADES[opcion_elegida];
}

string elegir_tamanio()
{
    cout<<"\tTAMAÑO DEL ANIMAL"<<endl;
    int opcion_elegida=0;

    for(int i=0;i<5;i++)
        {
            cout<<i+1<<". "<<TAMANIOS_STR[i]<<endl;
        }
    cout<<"Seleccione el tamaño: "<<endl;
    cin>>opcion_elegida;
    while(opcion_elegida>5 || opcion_elegida<1 )
    {
        cout<<"La opcion ingresada no es correcta. Intentelo nuevamente"<<endl;

        for(int i=0;i<4;i++)
        {
            cout<<i+1<<". "<<TAMANIOS_STR[i]<<endl;
        }

        cout<<"Seleccione el tamaño: "<<endl;
        cin>>opcion_elegida;

    }

    opcion_elegida = opcion_elegida - 1;

    return TAMANIOS_STR[opcion_elegida];
}

string ingresar_edad()
{
    cout<<"\tEDAD DEL ANIMAL"<<endl;


    string edad_str;

    cout<<"Ingrese la edad del animal: ";
    getline(cin,edad_str);

    while(stoi(edad_str)<EDAD_MIN || stoi(edad_str)>EDAD_MAX)
    {
        cout<<"La edad ingresada no es correcta. Intentelo nuevamente."<<endl;
        cout<<"Ingrese la edad del animal: ";
        cin>>edad_str;
    }


    return edad_str;
}


void rescatar_animales(Lista<Animal>* lista_animales)
{
    //edad, tamaño, especie y personalidad)
    string nombre_animal;

    string edad;

    string tamanio;

    string especie;

    string personalidad;

    int salir = 0;

    cin.ignore();

    cout<<"Ingrese el nombre del animal que desea rescatar: ";
    getline(cin,nombre_animal);



    if(verificar_nombre(lista_animales,nombre_animal))
    {
        cout<<"El nombre ingresado ya existe"<<endl;
        cout<<"Si desea salir ingrese [1], \nsi desea ingresar el nombre de otro animal ingrese [0]"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>salir;


    }
    else
    {
        edad = ingresar_edad();

        tamanio = elegir_tamanio();

        especie = elegir_especie();

        personalidad = elegir_personalidad();

        agregar_nodo_a_lista(lista_animales,nombre_animal,edad,tamanio,especie,personalidad);
    }

}



void buscar_animales(Lista<Animal>* lista_animales)
{
    string nombre_ingresado;

    cin.ignore();
    //getline(cin,titulo_nuevo_libro);
    cout<<"Ingrese el nombre del animal que desea buscar: ";
    getline(cin, nombre_ingresado);

    if(verificar_nombre(lista_animales,nombre_ingresado))
    {
        for(int i = 0; i < lista_animales->obtener_cantidad(); i++) {
        if(lista_animales->obtener_actual_dato()->obtener_nombre() == nombre_ingresado)
        {
            cout << "\t Nombre -" << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
            cout << "\t Edad -" << lista_animales->obtener_actual_dato()->obtener_edad() << endl;
            cout << "\t Tamaño -" << lista_animales->obtener_actual_dato()->obtener_tamanio() << endl;
            cout << "\t Especie -" << lista_animales->obtener_actual_dato()->obtener_especie() << endl;
            //cout << "\t Personalidad -" << lista_animales->obtener_actual_dato()->obtener_personalidad() << endl;

        }
        lista_animales->pasar_nodo();
    }

    lista_animales->iniciar_nodo_actual();


    }
    else
    {
        cout<<"El nombre ingresado no existe "<<endl;
    }


}

especie_t string_a_especie_t(string especie) {
    int posicion;
    for(int i = 0; i < CANTIDAD_ESPECIES; i++){
        if(especie == ESPECIES_STR[i])
            posicion = i;
    }
    return (especie_t) posicion;
}
