#include <iostream>
using namespace std;

//En nuestro proyecto solo es posible hacer matrices con los productos y sus precios
int main() 
{
    int i,j;
    string OP;
    string Productos [2][2];
    int Precios [2][2];
    
    Productos [0][0]="Papas";
    Productos [0][1]="Jugos";
    Productos [1][0]="Dulces";
    Productos [1][1]="Galletas";
    
    Precios [0][0]=2000;
    Precios [0][1]=1500;
    Precios [1][0]=500;
    Precios [1][1]=2500;
    
    cout << "Bienvenido a la interfaz, ingrese la matriz a la que desea acceder (productos/precios)\n";
    cin >> OP;
    if (OP == "productos")
        {
        cout << "Ingrese la cordenada del producto que desea consultar (i) (j), maximo (0-1) (0-1)\n";
        cin >> i >> j;
        cout << "El producto de esta posicion es: " << Productos [i][j];
        }
    if (OP == "precios")
        {
        cout << "Ingrese la cordenada del precio que desea consultar (i) (j), valores de  (0-1) (0-1)\n";
        cin>> i >> j;
        cout<<"El precio de esta posicion es: " << Precios [i][j];    
        }
        
    return 0;
}    