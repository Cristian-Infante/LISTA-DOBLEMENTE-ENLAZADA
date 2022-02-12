#include "NODODE.h"
#ifndef LISTADE_H
#define LISTADE_H

template <class T>
class LISTADE{
    private:
        NODODE<T> *head;
    public:
        LISTADE();
        virtual ~LISTADE();
        bool isEmpty();
        void push(T);
        T pop(T);
        void print();
};

#endif // LISTADE_H
