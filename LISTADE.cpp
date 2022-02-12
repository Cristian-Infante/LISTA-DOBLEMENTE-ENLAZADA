#include "LISTADE.h"
#include "NODODE.h"

template <typename T>
LISTADE<T>::LISTADE(){
    head = nullptr;
}

template <typename T>
LISTADE<T>::~LISTADE(){
    //dtor
}

template <typename T>
bool LISTADE<T>::isEmpty(){
    if(head==nullptr){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
void LISTADE<T>::push(T data){
    NODODE<T> *add = new NODODE<T>(data);
    if(isEmpty()){
        head = add;
    }
    else{
        NODODE<T> *aid = head;
        while((aid->getNext() != nullptr) && (aid->getInfo() < data)){
            aid = aid->getNext();
        }
        if(aid->getNext() == nullptr){
            if(aid->getInfo() < data){
                aid->setNext(add);
                add->setPrev(aid);
            }
            else{
                add->setNext(aid);
                aid->getPrev()->setNext(add);
                add->setPrev(aid->getPrev());
                aid->setPrev(add);
            }
        }
        else{
            if(head == aid){
                add->setNext(head);
                head->setPrev(add);
                head = add;
            }
            else{
                add->setNext(aid);
                aid->getPrev()->setNext(add);
                add->setNext(aid->getPrev());
                aid->setPrev(add);
            }
        }
    }
}

template <typename T>
T LISTADE<T>::pop(T data){
    if(isEmpty()){
        //cout<<"Is empty"<<endl;
    }
    else{
        NODODE<T> *aid = head;
        while((aid->getNext() != nullptr) && (data < aid->getInfo())){
            aid = aid->getNext();
        }
    }
}

template <typename T>
void LISTADE<T>::print(){
   NODODE<T> *aid = head;
   do{
      cout<<"  "<<aid->getInfo();
      aid = aid->getNext();
   }while (aid != nullptr);
}
