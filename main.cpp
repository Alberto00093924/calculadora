#include <iostream>
using namespace std;
int multiplicar(int x, int y)
{
    return x*y;
}

int sumar(int x, int y)
{
    return x+y;
}

int restar(int x, int y)
{
    return x-y;
}

int dividir(int x, int y)
{
    return x/y;
}

int main(){
    int a, b, opc;
    cout<<"Ingrese numero entero a=";
    cin>>a;
    cout<<"Ingrese numero entero b=";
    cin>>b;
    cout<<"Elija que opcion desea: \n\t1. Mutiplicar\n\t2. sumar\n\t3. restar\n\t4. dividir\n\otro numero: salir\n";
    cout<<"Su opcion es: ";
    cin>>opc;
    
    switch (opc)
    {
        case 1:
        cout<<"El resultado de"<<a<<"*"<<b<<"es "<<multiplicar(a,b);
        break;
        
        case 2:
        cout<<"El resultado de"<<a<<"+"<<b<<"es"<<sumar(a,b);
        break;
        
        case 3:
        cout<<"El resultado de"<<a<<"-"<<b<<"es"<<restar(a,b);
        break;
        
        case 4:
        cout<<"El resultado de"<<a<<"/"<<b<<"es"<<dividir(a,b);
        break;
        
        default:
        cout<<"No hice nada, salu";
        break;
    }    
    
    return 0;
}