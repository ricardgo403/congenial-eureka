#include "menu.hpp"
#include <iostream>

using namespace std;

Menu::Menu()
{
    counter = 0;
}

Menu::~Menu()
{
    //dtor
}

void Menu::desplegarMenu()
{
    bool noSalir = true;
    do{
        system("cls");
        switch(getMenuOption()){
            case 'a': agregar(); break;
            case 'b': eliminarElemento(); break;
            case 'c': eliminarPosicion(); break;
            case 'd': mostrarTamanio(); break;
            case 'e': mostrarContenido(); break;
            case 'f': mostrarFrente(); break;
            case 'g': mostrarUltimo(); break;
            case 'h': noSalir = false; break;
            default:
                cout << "Opcion no valida." << endl;
        }
        if(noSalir){
            cout << "Presione entrar para continuar. . ." << endl;
            cin.get();
        }
    }while(noSalir);
}

char Menu::getMenuOption()
{
    char opc;
    cout << "Menu lista de enteros:" << endl;
    cout << "a) Agregar" << endl;
    cout << "b) Eliminar elemento" << endl;
    cout << "c) Eliminar por posicion" << endl;
    cout << "d) Mostrar tamanio de la lista" << endl;
    cout << "e) Mostrar contenido" << endl;
    cout << "f) Mostrar frente de la lista" << endl;
    cout << "g) Mostrar el ultimo de la lista" << endl;
    cout << "h) Salir" << endl;
    cout << "Ingrese la opcion deseada: " << endl;
    cin >> opc;
    cin.get();
    return opc;
}

void Menu::agregar()
{
    int aux, temp;
    system("cls");
    cout << "Ingrese el numero entero a agregar: " << endl << ">>> ";
    cin >> aux;
    cin.get();
    switch(getInsertOption()){
        case 1: lista.pushFront(aux); break;
        case 2: lista.pushBack(aux); break;
        case 3:
            mostrarContenido();
            cout << "Ingrese la posicion en la que desea agregar: " << endl << ">>> ";
            cin >> temp;
            temp--;
            cin.get();
            lista.insert(temp, aux);
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    counter++;
}

void Menu::eliminarElemento()
{
    int aux;
    system("cls");
    mostrarContenido();
    cout << "Ingrese el numero entero a eliminar: " << endl << ">>> ";
    cin >> aux;
    cin.get();
    lista.remove(aux);
    counter--;
}

void Menu::eliminarPosicion()
{
    int aux;
    system("cls");
    mostrarContenido();
    cout << "Ingrese la posicion del numero entero a eliminar: " << endl << ">>> ";
    cin >> aux;
    cin.get();
    aux--;
    lista.erase(aux);
    counter--;
}

void Menu::mostrarTamanio()
{
    system("cls");
    cout << "La lista tiene " << lista.size() << " elementos actualmente."<< endl;
}

void Menu::mostrarContenido()
{
    system("cls");
    cout << "Contenido de la lista: " << endl << endl;
    cout << lista.toString();
}

void Menu::mostrarFrente()
{
    system("cls");
    cout << "El primer elemento es : " << lista.front() << endl;
}

void Menu::mostrarUltimo()
{
    system("cls");
    cout << "El ultimo elemento es : " << lista.back() << endl;
}

int Menu::getInsertOption()
{
    int opc;
    cout << "Menu insertar en:" << endl;
    cout << "1) Agregar al inicio" << endl;
    cout << "2) Agregar al final" << endl;
    cout << "3) Agregar en cualquier posicion seleccionada" << endl;
    cout << "Ingrese la opcion deseada: " << endl;
    cin >> opc;
    cin.get();
    return opc;
}
