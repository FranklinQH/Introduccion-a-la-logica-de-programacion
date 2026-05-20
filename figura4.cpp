#include <iostream>
using namespace std;
int main(){
    int n,j,i;
    cin>>n;
    for(i=n;i<=n&&i>=0;i--){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}