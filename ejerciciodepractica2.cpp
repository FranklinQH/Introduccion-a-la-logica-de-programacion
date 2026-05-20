//ejercicio que te indica en que etapa de tu vida estas
#include <iostream>
using namespace std;
int main()
{
    int e;
    cout<<"ingrese su edad actual: ";
    cin>>e;
    if(e<=18){
        if(e<13){
            cout<<"tienes menos de trece años ";
        }
        else{
            cout<<"estas en la adolescencia, mas de trece años pero menos de 19 ";
        }       
    }
    else{
            cout<<"oh finalmente tienes mas de 18 años";
        }
    return 0;
}