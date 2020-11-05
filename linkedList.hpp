// linkedList.hpp
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

template <class T>
class LinkedList
{   
    private:
        #include "node.hpp"
        size_t listSize;
        Node *listFront;
        Node *listBack;

    public:
        LinkedList<T>() {
            listSize = 0;
            listFront = nullptr;
            listBack = nullptr;
        };

        ~LinkedList<T>();
        bool empty() const;
        size_t size();
};
#endif
