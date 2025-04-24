#include <iostream>
using namespace std;
//La estrucutura "Producto" es la unica que puede contar con lista en nuestro proyecto
struct Producto 
    {
    string nombre;
    int precio;
    int cantidadDisponible;
    string donaFOPRE;
    };
main ()
{
    int tamaño;   
    cout<<"Ingrese el numero de productos\n";
    cin>>tamaño;
    Producto listaProductos[tamaño];
    for (int x=0; x<tamaño; x++)
    {
        cout<<"Ingrese los datos del producto (nombre, precio, cantidad disponible y si el prodcuto dona al FOPRE)\n";
        cin>>listaProductos[x].nombre;
        cin>>listaProductos[x].precio;
        cin>>listaProductos[x].cantidadDisponible;
        cin>>listaProductos[x].donaFOPRE;
    }
    for (int x=tamaño-1; x>=0; x--)
    {
        cout<<"\nNombre de producto: "<<listaProductos[x].nombre<<endl;
        cout<<"Precio de producto: "<<listaProductos[x].precio<<endl;
        cout<<"Cantidad disponible de producto: "<<listaProductos[x].cantidadDisponible<<endl;
        cout<<"¿El producto dona al FOPRE?: "<<listaProductos[x].donaFOPRE<<endl<<endl;
    }
}