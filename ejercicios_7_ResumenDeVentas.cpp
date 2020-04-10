#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <random>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main(){
    const int size_vendedores = 4;
    const int size_productos = 5;
    array<array<int, size_vendedores>, size_productos> estadisticas = {};
    int counter = 1;

    cout<<"Lista de productos: "<<endl<<endl;
    cout<<"1. AMD Rx 570: 15000"<<endl;
    cout<<"2. NVIDIA GeForce 1050ti: 20000"<<endl;
    cout<<"3. Asus Motherboard A320M-S2H: 6500"<<endl;
    cout<<"4. Teclado SKORPION K10: 2000"<<endl;
    cout<<"5. Memoria RAM Kingston 8gb: 4350"<<endl<<endl;

    cout<<"Vendedor 1"<<setw(5)<<"\t"<<"Vendedor 2"<<setw(5)<<"\t"<<"Vendedor 3"<<setw(5)<<"\t"<<"Vendedor 4"<<setw(6)<<"\t"<<"    TOTAL: "<<endl<<endl;
    cout<<setw(10);
    int mult_producto = 0;
    for (auto &producto : estadisticas){
        int suma = 0;
        mult_producto++;
        for (auto &ventas : producto){
            counter += 5613;
            default_random_engine motor(static_cast<unsigned int>(time(0)*counter));
            uniform_int_distribution<unsigned int> intAleatorio( 1, 10 );

            ventas = intAleatorio(motor);
            suma += ventas;
            cout<<ventas<<"\t"<<setw(10);
        }

        switch(mult_producto){
            case 1:
                suma *= 15000;
                cout<<suma<<"\t"<<setw(10);
                break;
            case 2:
                suma *= 20000;
                cout<<suma<<"\t"<<setw(10);
                break;
            case 3:
                suma *= 6500;
                cout<<suma<<"\t"<<setw(10);
                break;
            case 4:
                suma *= 2000;
                cout<<suma<<"\t"<<setw(10);
                break;
            case 5:
                suma *= 4350;
                cout<<suma<<"\t"<<setw(10);
                break;
            default:
                cout<<"no llega aca"<<endl;
                break;
        }
        cout<<endl;
    }
    cout<<"==============================================================="<<endl;
    cout<<setw(10);
    for (unsigned int i = 0; i < estadisticas[0].size(); i++){
        int suma = 0;
        for (unsigned int j = 0; j < estadisticas.size(); j++){
            suma += estadisticas[j][i];
        }
        cout<<suma<<setw(10)<<"\t";
    }
    cout<<endl;
    getch();
    return 0;
}
