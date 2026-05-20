#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"ingrese su componente x: ";
    cin>>x;
    cout<<"ingrese su componente y: ";
    cin>>y;
    if(x>0 && y>0)
    {
    cout<<"I";
    }
    if(x>0 && y<0)
    {
    cout<<"IV";
    }
    if(x<0 && y>0)
    {
    cout<<"II";
    }
    if(x<0 && y<0)
    {
    cout<<"III";
    }
    if(x==0 && y==0)
    {
    cout<<"Origen";
    }
    return 0;


}