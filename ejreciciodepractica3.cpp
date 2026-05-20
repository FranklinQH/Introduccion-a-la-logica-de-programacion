#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ingrese el valor de a:" ;
    cin>>a;
    cout<<"ingrese el valor de b:" ;
    cin>>b;
    cout<<"ingrese el valor de c:" ;
    cin>>c;
    if(a==b && b==c && c==a){
        cout<<"todas son iguales XD";
    }
    else{
        if(a>b){
            if(a>c){
                cout<<"el mayor es a";
            }
            else{
                cout<<"el mayor es c";
            }
        }
        else{
            if(b>c){
                cout<<"el mayor es b";
            }
            else{
                cout<<"el mayor es c";
            }
        }
    }
    return 0;
}