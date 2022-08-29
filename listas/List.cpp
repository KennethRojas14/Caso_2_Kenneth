//Elaborado por Kenneth Rojas Jiménez
//Estructuras de datos - Grupo 3
//Ultima modificación: 27/08/2022

#include <iostream>
#include "Node.cpp"
#include "../Caso_2.cpp"

using namespace std;

#ifndef LIST 

#define LIST 1


class List{
    private:
        Node *first;
        Node *last;
        int quantity;  //para ver cuantos elementos hay en la lista
        bool empty;

    public:
        List(){
            first = NULL;
            last = NULL;
            quantity = 0;
            empty = true;
        }
        void add(Device *pDato){
            Node *newNodo = new Node(pDato);  //crea un nuevo nodos

            if (quantity > 0){
                this->last->setNext(newNodo);
                this->last = newNodo;
            }else{
                this->first = newNodo;
                this->last = newNodo;
                }
            empty = false;
            quantity++;
        }

        Node* getFirst(){
            return this->first;
        }
        int getQuantity(){
                return quantity;
        }
        bool isEmpty() {
            return !quantity;
        }
        Device* showElement(int pPosition){
            Device* result = NULL;
            Node* search = this->first;
            if(pPosition < getQuantity()){
                while ( pPosition > 0){
                    search = search->getNext();
                    pPosition--;
                }
                result = search->getDato();
            }
            return result;
        }
};

#endif