#ifndef NODODE_H
#define NODODE_H
#include "iostream"
#include "string"
#include "conio.h"
using namespace std;

template <class T>
class NODODE{
    private:
        T info;
        NODODE *prev;
        NODODE *next;
    public:
        NODODE(T);
        virtual ~NODODE();
        void setInfo(T);
        void setPrev(NODODE *);
        void setNext(NODODE *);
        T getInfo();
        NODODE *getPrev();
        NODODE *getNext();
};

#endif // NODODE_H
