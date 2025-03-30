#include <iostream>
using namespace std;

int main() 
{
    int x,opcion,credito,opcompra,cantidadC,cantidadP,cantidadJ,cantidadD,cantidadG,ValorDP=0,ValorDJ=0,ValorDD=0,ValorDG=0,ValorCompraT,CantidadCP=0,
    CantidadCJ=0,CantidadCD=0,CantidadCG=0,CantidadCT;
    credito=0, cantidadP=100, cantidadJ=100, cantidadD=100, cantidadG=100;
    do
    {
        cout<<endl<<"Elija la opcion que requiera \n"<<"(1) Visualizar Productos \n"<<"(2) Agregar Credito \n"<<"(3) Compra de productos\n"<<
    "(4) Consultar cantidad total de compra actual \n"<<"(5) Consulta del valor de compra actual \n"<<"(6) Consultar producto mas comprado \n"<<"(7) Salir \n"<<"Solo son validos numeros enteros \n"<<endl;
        cin>>opcion; 
        switch (opcion)
        {
        case 1:
        cout<<"Productos Disp:           Precio         Cantidad"<<
        endl<<"Papas:                     2000           "<<cantidadP<<
        endl<<"Jugos:                     1500           "<<cantidadJ<<
        endl<<"Dulces:                    500            "<<cantidadD<<
        endl<<"Galletas:                  2500           "<<cantidadG<<endl;
        break;
        case 2:
        cout<<"Su credito actual es  de "<<credito<<endl;
        cout<<"Ingrese el credito que desea agregar"<<endl;
        cin>>x;
        cout<<"Su balance es de  "<<credito+x<<endl;
        credito=credito+x;
        break;
        case 3:
        if (credito<500) {cout<<"Su credito es insuficiente, por favor, ingrese mas a su balance"<<endl;}
            else {cout<<"Ingrese el numero de su producto //"<<" Su credito disponible es:"<<credito<<
                endl<<"Productos Disp:               Precio         Cantidad"<<
                endl<<"(1) Papas:                     2000            "<<cantidadP<<
                endl<<"(2) Jugos:                     1500            "<<cantidadJ<<
                endl<<"(3) Dulces:                    500             "<<cantidadD<<
                endl<<"(4) Galletas:                  2500            "<<cantidadG<<endl;
                cin>>opcompra;
                cout<<"Ingrese la cantidad deseada \n";
                cin>>cantidadC;};
            switch (opcompra)
            {    
            case 1:
            if (credito<(2000*cantidadC)) 
                {
                cout<<"saldo insuficiente para esta compra"<<endl;
                }
                else 
                {
                credito=credito-(2000*cantidadC);
                cout<<"Ha comprado "<<cantidadC<<" papas \n"<<
                "Su nuevo balance es de "<<credito<<endl;
                cantidadP=cantidadP-cantidadC;
                CantidadCP=cantidadC;
                ValorDP=2000*cantidadC;
                }
            break;
            case 2:
            if (credito<(1500*cantidadC)) 
                {
                cout<<"saldo insuficiente para esta compra"<<endl;
                }
                else 
                {
                credito=credito-(1500*cantidadC);
                cout<<"Ha comprado "<<cantidadC<<" jugos \n"<<
                "Su nuevo balance es de "<<credito<<endl;
                cantidadJ=cantidadJ-cantidadC;
                CantidadCJ=cantidadC;
                ValorDJ=1500*cantidadJ;
                }
            break;
            case 3:
            if (credito<(500*cantidadC)) 
                {
                cout<<"saldo insuficiente para esta compra"<<endl;
                }
                else 
                {
                credito=credito-(500*cantidadC);
                cout<<"Ha comprado "<<cantidadC<<" dulces \n"<<
                "Su nuevo balance es de "<<credito<<endl;
                cantidadD=cantidadD-cantidadC;
                CantidadCD=cantidadC;
                ValorDD=500*cantidadC;
                }
            break;
            case 4:
            if (credito<(2500*cantidadC)) 
                {
                cout<<"saldo insuficiente para esta compra"<<endl;
                }
                else 
                {
                credito=credito-(2500*cantidadC);
                cout<<"Ha comprado "<<cantidadC<<" galletas \n"<<
                "Su nuevo balance es de "<<credito<<endl;
                cantidadG=cantidadG-cantidadC;
                CantidadCG=cantidadC;
                ValorDG=2500*cantidadC;
                }
            break;
            }
        CantidadCT=CantidadCP+CantidadCJ+CantidadCD+CantidadCG;
        ValorCompraT=ValorDP+ValorDJ+ValorDD+ValorDG;
        break;
        case 4:
        cout<<"Su compra actual es de "<<CantidadCT<<" productos divididos en:\n"<<
        CantidadCP<<" Papas \n"<<CantidadCJ<<" Jugos \n"<<CantidadCD<<" Dulces \n"<<CantidadCG<<" Galletas \n";
        break;
        case 5:
        cout<<"Su compra actual costo "<<ValorCompraT<<endl;
        break;
        case 6:
        if (CantidadCP>CantidadCJ&&CantidadCP>CantidadCD&&CantidadCP>CantidadCG) 
        {
        cout<<"Su producto mas comprado fueron papas con un total de: "<<CantidadCP<<endl;
        }
        if (CantidadCJ>CantidadCP&&CantidadCJ>CantidadCD&&CantidadCJ>CantidadCG) 
        {
        cout<<"Su producto mas comprado fueron jugos con un total de: "<<CantidadCJ<<endl;
        }
        if (CantidadCD>CantidadCP&&CantidadCD>CantidadCJ&&CantidadCD>CantidadCG) 
        {
        cout<<"Su producto mas comprado fueron dulces con un total de: "<<CantidadCD<<endl;
        }
        if (CantidadCG>CantidadCP&&CantidadCG>CantidadCJ&&CantidadCG>CantidadCD) 
        {
        cout<<"Su producto mas comprado fueron gelletas con un total de: "<<CantidadCG<<endl;
        }
        if((CantidadCP=CantidadCJ)&&(CantidadCJ=CantidadCD)&&(CantidadCD=CantidadCG))
        {
        cout<<"Todos los produtos fueron comprados en la misma cantidad"<<endl;
        }
        break;        
        case 7:
        cout<<"Saliendo de la interfaz, gracias por su compra!";
        break;
        default:
        cout<<"Ingrese una opcion valida"<<endl;
        } 
    }while (opcion<7);     
}