//Elaborado por Kenneth Rojas Jiménez
//Estructuras de datos - Grupo 3
//Ultima modificación: 29/08/2022


#include <iostream>
#include "Caso_2.cpp"
#include "listas/List.cpp"

void executeTask(string, List, List);
void createTask( List, List);

int main() {
    //Lista de Dispositivos-----------------------------------------------------------------------------------
    List *listDevice = new List();  //crea una nueva lista para agregar los dispositivos
    Device *disp1 =  new Device("Bombillo");  
    Device *disp2 =  new Device("Luz Led");
    Device *disp3 =  new Device("Coffe maker");
    Device *disp4 = new Device("Parlante");
    //A continuación dichos dispositivo se agregaran a la lista de dispositivos
    listDevice->add(disp1);
    listDevice->add(disp2);
    listDevice->add(disp3);
    listDevice->add(disp4);

    //Lista de Acciones------------------------------------------------------------------------------------------
    List *listActions = new List();//crea una nueva lista para agregar las acciones
    Device *act1 =  new Device("encender");
    Device *act2 =  new Device("apagar");
    //A continuación dichas acciones se agregaran a la lista de acciones
    listActions->add(act1);
    listActions->add(act2);


    //Lista de Parametros------------------------------------------------------------
    List *listParameters = new List(); //crea una nueva lista para agregar las acciones
    Device *param1 =  new Device(10);
    Device *param2 =  new Device(5);
    Device *param3 =  new Device(1);
    //A continuación dichos parametros se agregaran a la lista de parametros
    listParameters->add(param1);
    listParameters->add(param2);
    listParameters->add(param3);


    //TAREAS--------------------------------------------------------------------------------------------------
    //Se definen ya varias tareas pre-hechas
    string tarea1 = "Buenos dias";
    string tarea2 = "Música";
    string tarea3 = "Hora de trabajar"; 
    string tarea4 = "Apagar todo";
    
    //Se ejecutan las tareas mediante el executeTask
    executeTask(tarea1, *listDevice, *listActions);
    executeTask(tarea2, *listDevice, *listActions);
    executeTask(tarea3, *listDevice, *listActions);
    executeTask(tarea4, *listDevice, *listActions);
    //Se crea una tarea según el usuario
    createTask(*listDevice, *listActions);
};

void executeTask(string taskName, List listDevice, List listActions){
        string tareas[4][4]={{"Buenos dias", listDevice.showElement(0)->getDevice(), listActions.showElement(0)->getDevice(),""},
                            {"Música",listDevice.showElement(3)->getDevice(),listActions.showElement(0)->getDevice(),""},
                            {"Hora de trabajar",listDevice.showElement(0)->getDevice(),listDevice.showElement(1)->getDevice(), listActions.showElement(0)->getDevice()},
                            {"Apagar todo",listActions.showElement(1)->getDevice()}};

        if (taskName == tareas[0][0]){
            cout << "La tarea " << taskName << " con el dispositivo " << listDevice.showElement(0)->getDevice() << " ejecutará la acción " << listActions.showElement(0)->getDevice() <<
            endl;
        }if(taskName == tareas[1][0]){
            cout << "La tarea " << taskName << " con el dispositivo " << tareas[1][1] << " ejecutará la accón " << tareas[1][2] <<
             endl;
        }if(taskName == tareas[2][0]){
            cout << "La tarea " << taskName << " con los dispositivos " << tareas[2][1] << ", "<<tareas[2][2]<<" ejecutará la acción " << tareas[2][3] <<
            endl;
        }else if(taskName == tareas[3][0]){
            cout << "La tarea " << taskName << " con los dispositivos " << tareas[0][1] << ", "<<tareas[1][1]<< ", "<<tareas[2][2]<<" ejecutará la acción " << tareas[3][1] <<
            " para todos los dispositivos"<< endl;
        }
        return ;
}


//crea una tarea segun el usuario
void createTask(List listDevice, List listActions){
    string newTask;
    int positionDevice;
    int positionActions;
    int actual = 0;
    cout << "\nEscriba el nombre de la tarea que desea agregar: ";
    cin >> newTask;
    cout << "\nDispositivos disponibles"<<endl;
    while(actual < listDevice.getQuantity()){
        cout << listDevice.showElement(actual)->getDevice() << endl;
        actual++;
    }
    cout <<"Escoja la posicon del dispositivo que quiere agregar a la tarea: " ;
    cin >> positionDevice;
    actual = 0;
    cout << "\nAcciones disponibles disponibles"<<endl;
    while(actual < listActions.getQuantity()){
        cout << listActions.showElement(actual)->getDevice() << endl;
        actual++;
    }
    cout <<"Escoja la posicon de la acción que quiere agregar a la tarea: " ;
    cin >> positionActions;

    cout << "\nLa tarea " << newTask << " con el dispositivo " << listDevice.showElement(positionDevice-1)->getDevice() << " ejecutará la acción "<< 
    listActions.showElement(positionActions-1)->getDevice();
}

