#ifndef NODE_HPP_INCLUDED
#define NODE_HPP_INCLUDED

struct Node
{
    T data;
    Node* next;

    Node(const T& element, Node* sig = nullptr):
        data(element), next(sig){}
};

#endif // NODE_HPP_INCLUDED
