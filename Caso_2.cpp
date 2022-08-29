//Elaborado por Kenneth Rojas Jiménez
//Estructuras de datos - Grupo 3
//Ultima modificación: 29/08/2022

#include <iostream>
#include <string>
#include "string.h"

using namespace std;

#ifndef DEVICE

#define DEVICE 1


class Device {
    private: 
        string device;
        string actions;
        int parameters;

    public:
        Device(string pDevice){//constructor de la clase
            this->device = pDevice;
        } 
        
        Device(int pParameters){//constructor de la clase
            this->parameters = pParameters;
        }
        
        Device(string pDevice, string pActions, int pParameters){//constructor de la clase
            this->device = pDevice;
            this->actions = pActions;
            this->parameters = pParameters;
        } 

        string getDevice() {
            return device;
        }

        int getParameters() {
            return parameters;
        }
        string getActions() {
            return actions;
        }
};
#endif