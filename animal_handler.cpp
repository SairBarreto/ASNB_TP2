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
    char delimitador = ','; //El delimitador tiene que ser de tipo char con string no funciona
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

void listar_animales(Lista<Animal>* lista_animales) 
{
    string inicial_de_especie;
    //nombre, edad, tamaño, especie en forma completa , personalidad, hambre e higiene.
    cout << "Animales en la Reserva:" << endl;

    cout<<"\n \t(nombre, edad, tamaño, especie en forma completa , personalidad, hambre,higiene)\n"<<endl;

    for(int i = 0; i < lista_animales->obtener_cantidad(); i++) {

        inicial_de_especie = lista_animales->obtener_actual_dato()->obtener_especie();

       cout<<"\t-"<<lista_animales->obtener_actual_dato()->obtener_nombre();
       cout<<","<<lista_animales->obtener_actual_dato()->obtener_edad();
       cout<<","<<lista_animales->obtener_actual_dato()->obtener_tamanio();
       cout<<","<<devolver_especie_palabra_completa(inicial_de_especie);
       cout<<","<<lista_animales->obtener_actual_dato()->obtener_personalidad();
       cout<<","<<lista_animales->obtener_actual_dato()->get_hambre();
       cout<<","<<lista_animales->obtener_actual_dato()->get_higiene()<<"\n"<<endl;


        lista_animales->pasar_nodo();
    }

    lista_animales->iniciar_nodo_actual();
}

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
    cout << "\tESPECIE DEL ANIMAL" << endl;
    int opcion_elegida = 0;
    cout << endl;
    cout << "Seleccione la especie: " << endl;
    cout << endl;
    cout << "\t1. Caballo" << endl;
    cout << "\t2. Conejo" << endl;
    cout << "\t3. Erizo" << endl;
    cout << "\t4. Gato" << endl;
    cout << "\t5. Lagartija" << endl;
    cout << "\t6. Perro" << endl;
    cout << "\t7. Roedor" << endl;
    cout << endl;
    cout << "Ingrese el numero de la opcion elegida: ";
    cin >> opcion_elegida;
    
    cout << endl << "---------------------------------------------------------" << endl << endl;

    while(opcion_elegida > 7 || opcion_elegida < 1 ){

        cout << "La opcion ingresada no es correcta, intente nuevamente" <<endl;
        cout << endl;
        cout << "\t1. Caballo" << endl;
        cout << "\t2. Conejo" << endl;
        cout << "\t3. Erizo" << endl;
        cout << "\t4. Gato" << endl;
        cout << "\t5. Lagartija" << endl;
        cout << "\t6. Perro" << endl;
        cout << "\t7. Roedor" << endl;
        cout << endl;
        cout << "Ingrese el numero de la opcion elegida: ";
        cin >> opcion_elegida;
    }

    opcion_elegida = opcion_elegida - 1;
    return ESPECIES_STR[opcion_elegida];
}

string devolver_especie_palabra_completa(string inicial_ingresada)
{
    string inicial;
    string palabra;
    string especie_nombre_completo;

    for(int i=0;i<7;i++)
    {
        palabra = ESPECIES_COMPLETAS[i];
        inicial = palabra[0];

        if (inicial_ingresada == inicial && palabra != "Conejo" )
        {
            especie_nombre_completo = palabra;
        }
        else if (inicial_ingresada == "O" && palabra =="Conejo")
        {
            especie_nombre_completo = palabra;
        }
    }

    return especie_nombre_completo;
}


string elegir_personalidad()
{
    cout << "\tPERSONALIDAD DEL ANIMAL" << endl;
    int opcion_elegida = 0;
    cout << endl;
    for(int i = 0; i < 4 ; i++){
        cout << i+1 << ". " << PERSONALIDADES[i] << endl;
    }
    cout << endl;
    cout << "Seleccione la personalidad: ";
    cin >> opcion_elegida;

    cout << endl << "---------------------------------------------------------" << endl << endl;

    while(opcion_elegida > 4 || opcion_elegida < 1){
        cout << "La opcion ingresada no es correcta. Intentelo nuevamente." << endl;
        cout << endl;
        for(int i = 0; i < 4; i++){
            cout << i+1 << ". " << PERSONALIDADES[i] <<endl;
        }
        cout << endl;
        cout << "Seleccione la personalidad: ";
        cin >> opcion_elegida;
    }

    opcion_elegida = opcion_elegida - 1;
    return PERSONALIDADES[opcion_elegida];
}

string elegir_tamanio()
{
    cout << "\tTAMAÑO DEL ANIMAL" << endl;
    int opcion_elegida = 0;
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << i+1 << ". " << TAMANIOS_STR[i] << endl;
    }
    cout << endl;
    cout << "Seleccione el tamaño: ";
    cin >> opcion_elegida;

    cout << endl << "---------------------------------------------------------" << endl << endl;
    
    while(opcion_elegida > 5 || opcion_elegida < 1 ){
        cout << "La opcion ingresada no es correcta. Intentelo nuevamente" << endl;
        cout << endl;
        for(int i = 0; i < 5; i++){
            cout << i+1 << ". " << TAMANIOS_STR[i] << endl;
        }
        cout << endl;
        cout << "Seleccione el tamaño: ";
        cin >> opcion_elegida;
    }

    opcion_elegida = opcion_elegida - 1;
    return TAMANIOS_STR[opcion_elegida];
}

string ingresar_edad()
{
    cout << "\tEDAD DEL ANIMAL" << endl;
    string edad_str;
    cout << endl;
    cout << "Ingrese la edad del animal: ";
    getline(cin >> ws,edad_str);

    while(stoi(edad_str) < EDAD_MIN || stoi(edad_str) > EDAD_MAX){
        cout << "La edad ingresada no es correcta. Intentelo nuevamente." << endl;
        cout << "Ingrese la edad del animal: ";
        cin >> edad_str;
    }

    return edad_str;
}

void rescatar_animales(Lista<Animal>* lista_animales)
{

    string nombre_animal;
    string edad;
    string tamanio;
    string especie;
    string personalidad;

    cin.ignore();
    int opcion = 0;
    bool salir = true;

    //cout << "Ingrese el nombre del animal que desea rescatar: ";
    nombre_animal = elegir_nombre();

    while(salir){
        if(verificar_nombre(lista_animales,nombre_animal) == false){
            cout << endl;
            edad = ingresar_edad();
            cout << endl;
            tamanio = elegir_tamanio();
            cout << endl;
            especie = elegir_especie();
            cout << endl; 
            personalidad = elegir_personalidad();

            agregar_nodo_a_lista(lista_animales,nombre_animal,edad,tamanio,especie,personalidad);

            cout << endl << "---------------------------------------------------------" << endl << endl;
            salir = false;
        }
        else{
            cout << "El nombre ingresado ya existe" << endl;
            cout << "Si desea salir ingrese [1], \nsi desea ingresar el nombre de otro animal ingrese [2]" << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcion;

            if(opcion == 1){
                salir = false;
            }
            else{
                cin.ignore();
                cout << "Ingrese el nombre del animal que desea rescatar: ";
                getline(cin,nombre_animal);
            }
        }
    }
}

void buscar_animales(Lista<Animal>* lista_animales)
{
    string nombre_ingresado;
    string inicial_especie;

    cin.ignore();
    cout << "Ingrese el nombre del animal que desea buscar" << endl;
    cout << endl;
    nombre_ingresado = elegir_nombre();

    if(verificar_nombre(lista_animales,nombre_ingresado)){
        for(int i = 0; i < lista_animales->obtener_cantidad(); i++){

            if(lista_animales->obtener_actual_dato()->obtener_nombre() == nombre_ingresado){
                inicial_especie =  lista_animales->obtener_actual_dato()->obtener_especie();
                cout << endl;
                cout << "\t Nombre: " << lista_animales->obtener_actual_dato()->obtener_nombre() << endl;
                cout << "\t Edad: " << lista_animales->obtener_actual_dato()->obtener_edad() << endl;
                cout << "\t Tamaño: " << lista_animales->obtener_actual_dato()->obtener_tamanio() << endl;
                cout << "\t Especie: " << devolver_especie_palabra_completa(inicial_especie) << endl;
                cout << "\t Personalidad: " << lista_animales->obtener_actual_dato()->obtener_personalidad() << endl;

            }
            lista_animales->pasar_nodo();
        }

        lista_animales->iniciar_nodo_actual();
    }
    else{
        cout << "\nERROR: El nombre ingresado no existe " << endl;
    }
}
//fin anto
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
    cout << "Ingrese cantidad de metros cuadrados disponibles: ";
    cin >> metros_cuadrados;

    mostrar_animales_en_adopcion(lista_animales, metros_cuadrados);

    cout << "¿Cual desea adoptar? Ingrese su nombre: ";
    getline(cin >> ws, nombre_buscado);
    
    bool existe_nombre = false;
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

    cout << endl;
    for(int i = 0; i < lista_animales->obtener_cantidad(); i++){
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
    for(int i = 0; i < CANTIDAD_TAMANIOS; i++){

        if(tamanio == TAMANIOS[i].tamanio)
            espacio_minimo = TAMANIOS[i].min;
    }
    return espacio_minimo;
}
//Cosas para el Manu 2
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
            cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " es una Roedor por lo que no necesita un baño" << endl;
            break;
        case 'L':
            cout << lista_animales->obtener_actual_dato()->obtener_nombre() << " es un Lagartija por lo que no necesita un baño" << endl;
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

void guardar_y_salir(Lista<Animal>* lista_animales){
    char delimitador = ',';
    ofstream archivo(PATH_ANIMALES, ios::out);

    for(int i = 0; i < lista_animales->obtener_cantidad(); i++){
        archivo << lista_animales->obtener_actual_dato()->obtener_nombre() << delimitador << lista_animales->obtener_actual_dato()->obtener_edad() << delimitador << lista_animales->obtener_actual_dato()->obtener_tamanio() << delimitador << lista_animales->obtener_actual_dato()->obtener_especie() << delimitador << lista_animales->obtener_actual_dato()->obtener_personalidad() << endl;
        lista_animales->pasar_nodo();
    }

    archivo.close();
}