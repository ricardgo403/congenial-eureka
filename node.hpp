#ifndef NODE_HPP_INCLUDED
#define NODE_HPP_INCLUDED

struct Node
{
    T dato;
    Node* siguiente;

    Node(const T& elemento, Node* sig = nullptr):
        dato(elemento), siguiente(sig){}
};

#endif // NODE_HPP_INCLUDED
