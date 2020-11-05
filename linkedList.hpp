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
        void pushFront(const T& element);
        void pushBack(const T& element);
        const T& front() const;
        const T& back() const;
        void popFront();
        void popBack();
        void insert(size_t position, const T& element);
        void erase(size_t position);
        void clear();
        void remove(const T& value);
        string toString();
};
#endif
