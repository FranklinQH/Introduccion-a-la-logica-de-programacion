#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<=20){
        if(a==5){
            cout<<"su numero es: "<<a;
        }
        else{
            cout<<"su numero es diferente de cinco";
        }
    }
    else{
        cout<<"su numero es mayor que 20 ";
    }
    return 0;

}
