#include <iostream>
using namespace std;

struct Credito 
    {
    int valor=0;
    };
struct Producto 
    {
    string nombre;
    int precio;
    int cantidadDisponible;
    bool donaFOPRE;
    };
struct EstadoCompra 
    {
    int cantidadP=0, cantidadJ=0, cantidadD=0, cantidadG=0;
    int totalProductos=0;
    int valorTotal=0;
    int donacionP=0, donacionD=0, donacionTotal=0;
    };

int main() 
    {
    int opcion, opcompra, cantidadC;
    Credito credito;
    Producto papas = {"Papas", 2000, 100, true};
    Producto jugos = {"Jugos", 1500, 100, false};
    Producto dulces = {"Dulces", 500, 100, true};
    Producto galletas = {"Galletas", 2500, 100, false};
    EstadoCompra estado;

    do 
        {
        cout << "\nElija la opción que requiera \n"
             << "(1) Visualizar Productos \n"
             << "(2) Agregar Crédito \n"
             << "(3) Compra de productos\n"
             << "(4) Consultar cantidad total de compra actual \n"
             << "(5) Consulta del valor de compra actual \n"
             << "(6) Consultar producto más comprado \n"
             << "(7) Consultar cantidad de productos FOPRE comprados \n"
             << "(8) Consultar valor por producto de donación a FOPRE \n"
             << "(9) Consultar valor total de donacion a FOPRE \n"
             << "(10) Salir \n"
             << "Solo son válidos números enteros\n";
        cin >> opcion;

        switch (opcion) 
            {
            case 1:
            cout << "Productos Disponibles:"<<"         Precio          "<<"Cantidad\n";
            cout << papas.nombre <<"(6% FOPRE) :"<<"               "<<papas.precio<<"             "<< papas.cantidadDisponible << endl;
            cout << jugos.nombre <<"           :"<<"               "<<jugos.precio<<"             "<< jugos.cantidadDisponible << endl;
            cout << dulces.nombre <<"(6% FOPRE):"<<"               "<<dulces.precio<<"              "<<dulces.cantidadDisponible << endl;
            cout << galletas.nombre <<"        :"<<"               "<<galletas.precio<<"             "<<galletas.cantidadDisponible << endl;
            break;
            case 2:
            cout << "Su crédito actual es: " << credito.valor << endl;
            cout << "Ingrese el crédito que desea agregar: ";
            cin >> cantidadC;
            credito.valor += cantidadC;
            cout << "Su nuevo balance es: " << credito.valor << endl;
            break;
            case 3:
                if (credito.valor < 500) 
                {
                cout <<"Crédito insuficiente, por favor agregue más.\n";
                } else 
                    {
                    cout <<"Seleccione el producto:\n"
                     << "(1) " << papas.nombre << ": " << papas.precio << "\n"
                     << "(2) " << jugos.nombre << ": " << jugos.precio << "\n"
                     << "(3) " << dulces.nombre << ": " << dulces.precio << "\n"
                     << "(4) " << galletas.nombre << ": " << galletas.precio << "\n";
                    cin >> opcompra;
                    if (opcompra<1||opcompra>4) 
                    {
                    cout <<"Opción inválida.\n";
                    break;
                    }
                    cout <<"Ingrese la cantidad:";
                    cin >> cantidadC;
                    
                    Producto* seleccionado;
                    int* cantidadComprada;

                    if (opcompra==1) {seleccionado = &papas; cantidadComprada = &estado.cantidadP;}
                    else if (opcompra==2) { seleccionado = &jugos; cantidadComprada = &estado.cantidadJ;}
                    else if (opcompra==3) { seleccionado = &dulces; cantidadComprada = &estado.cantidadD;}
                    else {seleccionado = &galletas; cantidadComprada = &estado.cantidadG;}
    
                    int costoTotal = seleccionado->precio * cantidadC;

                    if (credito.valor < costoTotal) 
                    {
                    cout << "Saldo insuficiente para esta compra.\n";
                    } 
                    else if (cantidadC > seleccionado->cantidadDisponible) 
                    {
                    cout << "No hay suficiente inventario disponible.\n";
                    } else 
                        {
                        credito.valor -= costoTotal;
                        seleccionado->cantidadDisponible -= cantidadC;
                        *cantidadComprada += cantidadC;
                        estado.valorTotal += costoTotal;
                        estado.totalProductos += cantidadC;

                        if (seleccionado->donaFOPRE)
                        {
                        int donacion = (int)(seleccionado->precio * 0.06) * cantidadC;
                        if (opcompra == 1) estado.donacionP += donacion;
                        if (opcompra == 3) estado.donacionD += donacion;
                        estado.donacionTotal += donacion;
                        }

                    cout << "Compra realizada. Nuevo saldo: " << credito.valor << endl;
                        }
                    }
            break;
            case 4:
                cout << "Total de productos comprados: " << estado.totalProductos << "\n";
                cout << "Papas: " << estado.cantidadP << "\nJugos: " << estado.cantidadJ
                << "\nDulces: " << estado.cantidadD << "\nGalletas: " << estado.cantidadG << "\n";
            break;
            case 5:
                cout << "Valor total de la compra actual: " << estado.valorTotal << "\n";
            break;
            case 6:
            if (estado.cantidadP==0&&estado.cantidadJ==0&&estado.cantidadD==0&&estado.cantidadG==0)
                {
                cout<<"Error, no ha comprado ningun producto\n";
                }
                else
                {
                if (estado.cantidadP >= estado.cantidadJ && estado.cantidadP >= estado.cantidadD && estado.cantidadP >= estado.cantidadG)
                cout << "Producto más comprado: Papas (" << estado.cantidadP << ")\n";
                else if (estado.cantidadJ >= estado.cantidadP && estado.cantidadJ >= estado.cantidadD && estado.cantidadJ >= estado.cantidadG)
                cout << "Producto más comprado: Jugos (" << estado.cantidadJ << ")\n";
                else if (estado.cantidadD >= estado.cantidadP && estado.cantidadD >= estado.cantidadJ && estado.cantidadD >= estado.cantidadG)
                cout << "Producto más comprado: Dulces (" << estado.cantidadD << ")\n";
                else
                cout << "Producto más comprado: Galletas (" << estado.cantidadG << ")\n";
                }
            break;
            case 7:
                cout << "Cantidad de productos FOPRE comprados:\n";
                cout << "Papas: " << estado.cantidadP << "\nDulces: " << estado.cantidadD << "\n";
            break;
            case 8:
                cout << "Donación por producto:\n";
                cout << "Papas: " << estado.donacionP << "\nDulces: " << estado.donacionD << "\n";
            break;
            case 9:
                cout << "Donación total al FOPRE: " << estado.donacionTotal << "\n";
            break;
            case 10:
                cout << "Saliendo del sistema. ¡Gracias por su compra!\n";
            break;
            default:
                cout << "Ingrese una opción válida.\n";
            break;
            }
        } while (opcion != 10);
    return 0;
    }