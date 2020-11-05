#ifndef NODO_HPP_INCLUDED
#define NODO_HPP_INCLUDED

struct Nodo
{
    T dato;
    Nodo* siguiente;

    Nodo(const T& elemento, Nodo* sig = nullptr):
        dato(elemento), siguiente(sig){}
};

#endif // NODO_HPP_INCLUDED
