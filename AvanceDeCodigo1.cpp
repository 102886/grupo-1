#include <iostream>
using namespace std;

int main() 
{
    int opcion,credito,opcompra,cantidadc;
    string estado,p,j,g,d;
    cout<<"Elija la opcion que requiera"<<endl<<"(1) Visualizar Productos"<<endl<<"(2) Agregar Credito"<<endl<<"(3) Compra de productos"<<endl;
    cin>>opcion;
    switch (opcion)
    {
        case 1:
        cout<<"Productos Disp:           Precio         Cantidad"<<
        endl<<"Papas:                     2000            100"<<
        endl<<"Jugos:                     1500            100"<<
        endl<<"Dulces:                    500             100"<<
        endl<<"Galletas:                  2500            100";
        break;
        case 2:
        cout<<"Ingrese el credito que desea agregar"<<endl;
        cin>>credito;
        cout<<"Su balance es de  "<<credito;
        break;
        case 3:
        cout<<"Ingrese el numero de su producto //"<<" Su credito disponible es:"<<credito<<
        endl<<"Productos Disp:               Precio         Cantidad"<<
        endl<<"(1) Papas:                     2000            100"<<
        endl<<"(2) Jugos:                     1500            100"<<
        endl<<"(3) Dulces:                    500             100"<<
        endl<<"(4) Galletas:                  2500            100"<<endl;
        cin>>opcompra;
        cout<<"Ingrese la cantidad deseada";
        cin>>cantidadc;
        if (credito<=500) {cout<<"Su credito es insuficiente, por favor, ingrese mas a su balance"<<endl;}
            switch (opcompra)
            {
                case 1:
                credito=credito-2000*cantidadc;
                cout<<"Ha comprado "<<cantidadc<<" papas"<<
                endl<<"Su nuevo balance es de "<<credito;
                break;
                case 2:
                credito=credito-1500*cantidadc;
                cout<<"Ha comprado "<<cantidadc<<" jugos"<<
                endl<<"Su nuevo balance es de "<<credito;
                break;
                case 3:
                credito=credito-500*cantidadc;
                cout<<"Ha comprado "<<cantidadc<<" dulces"<<
                endl<<"Su nuevo balance es de "<<credito;
                break;
                case 4:
                credito=credito-2500*cantidadc;
                cout<<"Ha comprado "<<cantidadc<<" galletas"<<
                endl<<"Su nuevo balance es de "<<credito;
                break;
            }
        break;
    }
}
