//Elaborado por Kenneth Rojas Jiménez
//Estructuras de datos - Grupo 3
//Ultima modificación: 27/08/2022
#include "../Caso_2.cpp"
#ifndef NODE 

#define NODE 1
class Node {
    private:
        Device *dato;  //Lo que esta aquí se metera en la lista
        Node *next;

    public:
        Node(){   //constructor que inicializa atributos en NULL
            dato = NULL;
            next = NULL;
        }

        Node(Device *pDato){
            this->dato = pDato;//revisar pDato
            next = NULL;
        }

        Device* getDato(){ //Extraigo el valor privado de dato
            return dato;
        }

        Node* getNext(){  
            return next;
        }

        void setNext(Node *pValues){//Modifico el valor privado de dato
            this->next = pValues;
        }


};
#endif