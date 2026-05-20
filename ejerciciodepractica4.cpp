#include <iostream>
using namespace std;
int main()
{
    float practica,teoria,participacion,prom;
    cout<<"ingrese su nota de cero a 20 de su practica: ";
    cin>>practica;
    cout<<"ingrese su nota de cero a 20 de su teoria: ";
    cin>>teoria;
    cout<<"ingrese su nota de cero a 20 de su participacion: ";
    cin>>participacion;
    prom=(30*practica/100+60*teoria/100+10*participacion/100);
    cout<<"su nota de practica es: "<<practica<<endl;
    cout<<"su nota de su teoria es: "<<teoria<<endl;
    cout<<"su nota de su participacion es: "<<participacion<<endl;
    cout<<"su promedio final es: "<<prom<<endl;
    return 0; 

}