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
#include "menu.h"


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


void listar_animales(Lista<Animal>* lista_animales) {

    cout << "Animales en la Reserva:" << endl;

    for(int i = 0; i < lista_animales->obtener_cantidad(); i++) {
        cout << "\t -" << lista_animales->obtener_actual_dato()->obtener_nombre() << " Higiene:" << lista_animales->obtener_actual_dato()->obtener_higiene() << ", Hambre:"<< lista_animales->obtener_actual_dato()->obtener_hambre() << endl;
        lista_animales->pasar_nodo();
    }

    lista_animales->iniciar_nodo_actual();
}


especie_t string_a_especie_t(string especie) {
    int posicion;
    for(int i = 0; i < CANTIDAD_ESPECIES; i++){
        if(especie == ESPECIES_STR[i])
            posicion = i;
    }
    return (especie_t) posicion;
}

void animales_paso_del_tiempo(Lista<Animal>* lista_animales) {
    for(int i = 0; i < lista_animales->obtener_cantidad(); i++) {
        lista_animales->obtener_actual_dato()->ensuciar();
        lista_animales->obtener_actual_dato()->gastar_energia();
        lista_animales->pasar_nodo();
    }
    lista_animales->iniciar_nodo_actual();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void adoptar_animal(Lista<Animal>* lista_animales){
    int metros_cuadrados = 0;
    string nombre_buscado; 
    while(metros_cuadrados < 0 || metros_cuadrados > 100){ 
        cout << "Ingrese cantidad de metros cuadrados disponibles [0-100]: ";
        cin >> metros_cuadrados;
    }

    mostrar_animales_en_adopcion(lista_animales, metros_cuadrados);
   
    cout << "¿Cual desea adoptar? Ingrese su nombre: ";
    nombre_buscado = elegir_nombre();
    //fflush(stdin);
    //getline(cin >> ws, nombre_buscado);
    //cin >> nombre_buscado;
    bool existe_nombre = false;
    //cout << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
    existe_nombre = verificar_animal_a_adoptar(lista_animales, nombre_buscado);
    if(!existe_nombre){
        cout << "No existe animal con ese nombre en la lista. Vuelva a intentarlo." << endl;}
    else{
        for(int i = 0; i < lista_animales->obtener_cantidad(); i++) {
            if(nombre_buscado == lista_animales->obtener_actual_dato()->obtener_nombre())
                lista_animales->borrar_nodo_actual();
            lista_animales->pasar_nodo();
        }
        cout << "Felicidades usted adopto a " << nombre_buscado << endl;
    }
    int i = 0;

    while(i < lista_animales->obtener_cantidad() && !existe_nombre){
        if(nombre_buscado == lista_animales->obtener_actual_dato()->obtener_nombre()){
            lista_animales->borrar_nodo_actual();
            cout << endl;
            cout << "Felicidades usted adopto a " << nombre_buscado << endl;
            cout << endl << "---------------------------------------------------------" << endl << endl;
            existe_nombre = true;
        }
        i++;
        lista_animales->pasar_nodo();  
    }

    if(existe_nombre == false){
        cout << endl;
        cout << nombre_buscado << " no se encuentra en la Reserva" << endl;
        cout << endl << "---------------------------------------------------------" << endl << endl;
    }

    lista_animales->iniciar_nodo_actual();
}

void mostrar_animales_en_adopcion(Lista<Animal>* lista_animales, int metros_cuadrados){    

    for(int i=0;i<lista_animales->obtener_cantidad(); i++){
        if(puede_vivir_en_espacio(lista_animales->obtener_actual_dato(), metros_cuadrados)){ 
        cout << "\t -" << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
        }
        lista_animales->pasar_nodo(); 
    }
    cout << endl;
    lista_animales->iniciar_nodo_actual(); //vuelve al nodo inicial
}

bool puede_vivir_en_espacio(Animal* animal, int metros_cuadrados) {
    int minimo = string_a_tamanio(animal->obtener_tamanio());
    if(metros_cuadrados >= minimo)
        return true;
    return false;
}

int string_a_tamanio(string tamanio) {
    int espacio_minimo = 100;
    //cout << endl;
    for(int i = 0; i < CANTIDAD_TAMANIOS; i++){
        //cout << tamanio << " " << TAMANIOS[i].tamanio << endl;
        if(tamanio == TAMANIOS[i].tamanio)
            espacio_minimo = TAMANIOS[i].min;
    }
    return espacio_minimo;
}

//Cosas para el Manu 2
//Funciona
void alimentar_todos_animales(Lista<Animal>* lista_animales)
{
    for(int i = 0; i < lista_animales->obtener_cantidad(); i++){
        lista_animales->obtener_actual_dato()->hambre = 0;
        lista_animales->pasar_nodo();
    }

    cout << "Se han Alimentado a todos los animales en la Reserva" << endl;
    cout << endl << "---------------------------------------------------------" << endl << endl;

    lista_animales->iniciar_nodo_actual();
}
//Funciona
void banio_todos(Lista<Animal>* lista_animales)
{
    for(int i = 0; i < lista_animales->obtener_cantidad(); i++){
        lista_animales->obtener_actual_dato()->higiene = 100;
        lista_animales->pasar_nodo();
    }

    cout << "Se han Bañado a todos los animales de la Reserva" << endl;
    cout << endl << "---------------------------------------------------------" << endl << endl;

    lista_animales->iniciar_nodo_actual();
}
//Funciona
void elegir_individualmente(Lista<Animal>* lista_animales)
{
    string nombre_buscado;
    int opcion, i = 0;
    bool encontrado = false;

    nombre_buscado = elegir_nombre();

    while(i < lista_animales->obtener_cantidad() && !encontrado){
        if(lista_animales->obtener_actual_dato()->obtener_nombre() == nombre_buscado){
            cout << endl;
            cout << "Que quiere hacer con " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl << endl;
            mostrar_menu_individual();
            opcion = menu_pedir_opcion();
            menu_validar_opcion_individual(opcion);
            procesar_opcion_individual(opcion, lista_animales);
            encontrado = true;
        }
        i++;
        lista_animales->pasar_nodo();
    }

    if(encontrado == false){
        cout << endl;
        cout << "El nombre ingresado no se encuentra en la Reserva" << endl;
        cout << endl << "---------------------------------------------------------" << endl << endl;
    }

    lista_animales->iniciar_nodo_actual();
}

void banio_individual(Lista<Animal>* lista_animales)
{
    char especie;
    especie = lista_animales->obtener_actual_dato()->obtener_especie()[0];

    switch (especie){
        case 'G':
            cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " es un Gato por lo que no necesita un baño" << endl;
            break;
        case 'R':
            cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " es una Lagartija por lo que no necesita un baño" << endl;
            break;
        case 'L':
            cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " es un Roedor por lo que no necesita un baño" << endl;
            break;
        default:
            lista_animales->obtener_actual_dato()->higiene = 100;
            cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " a sido bañado" << endl;
            break;
    }
    cout << endl << "---------------------------------------------------------" << endl << endl;
}

void comida_individual(Lista<Animal>* lista_animales)
{
    char especie;
    lista_animales->obtener_actual_dato()->hambre = 0;
    especie = lista_animales->obtener_actual_dato()->obtener_especie()[0];

    switch (especie){
        case 'P':
            cout << "Se dio de comer Huesos a " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
            break;
        case 'G':
            cout << "Se dio de comer Atun a" << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
            break;
        case 'C':
            cout << "Se dio de comer Manzanas a " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
            break;
        case 'R':
            cout << "Se dio de comer Queso a " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
            break;
        case 'O':
            cout << "Se dio de comer Lechuga a " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
            break;
        case 'E':
        case 'L':
            cout << "Se dio de comer Insectos a " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
            break;
    }
    cout << endl << "---------------------------------------------------------" << endl << endl;
}