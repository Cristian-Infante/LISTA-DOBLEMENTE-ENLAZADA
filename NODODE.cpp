#include "NODODE.h"

template <typename T>
NODODE<T>::NODODE(T dato){
    info = dato;
    prev = next = nullptr;
}

template <typename T>
NODODE<T>::~NODODE(){
    info = NULL;
    prev = next = nullptr;
}

template <typename T>
void NODODE<T>::setInfo(T data){
    info = data;
}

template <typename T>
void NODODE<T>::setPrev(NODODE *previous){
    prev = previous;
}

template <typename T>
void NODODE<T>::setNext(NODODE *near){
    next = near;
}

template <typename T>
T NODODE<T>::getInfo(){
    return info;
}

template <typename T>
NODODE<T> *NODODE<T>::getPrev(){
    return prev;
}

template <typename T>
NODODE<T> *NODODE<T>::getNext(){
    return next;
}
