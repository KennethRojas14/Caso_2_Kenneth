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
        Device();
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