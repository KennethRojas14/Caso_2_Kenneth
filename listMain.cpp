//Elaborado por Kenneth Rojas Jiménez
//Estructuras de datos - Grupo 3
//Ultima modificación: 28/08/2022


#include <iostream>
#include "Caso_2.cpp"
#include "listas/List.cpp"

void executeTask(string, List);

int main() {
    //Lista de Dispositivos-----------------------------------------------------------------------------------
    List *listDevice = new List();
    Device *disp1 =  new Device("Bombillo");
    Device *disp2 =  new Device("Luz Led");
    Device *disp3 =  new Device("Coffe maker");
    listDevice->add(disp1);
    listDevice->add(disp2);
    listDevice->add(disp3);
    int actual = 0 ;
    while (actual < listDevice->getQuantity()){
        Device *result = listDevice->showElement(actual);
        cout <<result->getDevice() << "->";
        actual++;
    }
    cout << "\ncantidad de Dispositivos: " << listDevice->getQuantity() << "\n" << endl;

    //Lista de Acciones------------------------------------------------------------------------------------------
    List *listActions = new List();
    Device *act1 =  new Device("Encender");
    Device *act2 =  new Device("Apagar");
    listActions->add(act1);
    listActions->add(act2);

    cout << "\ncantidad de Acciones: " << listActions->getQuantity() << "\n" <<endl;

    //Lista de Parametros------------------------------------------------------------
    List *listParameters = new List();
    Device *param1 =  new Device(10);
    Device *param2 =  new Device(5);
    Device *param3 =  new Device(1);
    listParameters->add(param1);
    listParameters->add(param2);
    listParameters->add(param3);
    cout << "\ncantidad de Parametros: " << listParameters->getQuantity() << "\n" << endl;

    //-------------------------------------------------------------------------------------------------------

    cout << "\nparece que se agregó a la lista" << endl;

    //TAREAS--------------------------------------------------------------------------------------------------
    string tarea1 = "hola";
    string tarea2 = "Buenos dias";
    string tarea3 = "Hora de trabajar";
    executeTask(tarea1, *listDevice);   

};

void executeTask(string taskName, List listDevice){
        cout << "La tarea "  << taskName << " con el dispositivo " << listDevice->showElement(0)->getDevice()<<endl;
    }
