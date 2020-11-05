#ifndef MENU_HPP
#define MENU_HPP
#include "linkedList.hpp"

class Menu
{
    public:
        Menu();
        ~Menu();

        void desplegarMenu();
        char getMenuOption();

        int getInsertOption();

        void agregar();
        void eliminarElemento();
        void eliminarPosicion();
        void mostrarTamanio();
        void mostrarContenido();
        void mostrarFrente();
        void mostrarUltimo();

    private:
        LinkedList<int> lista;
        int counter;
};

#endif // MENU_HPP
