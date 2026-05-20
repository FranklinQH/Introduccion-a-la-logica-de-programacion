#include <iostream>
using namespace std;
int main() {
    int n, i, imp=1;
    cin>>n;
    for(i=1; i<=n; i++){
    if(i%2==1){
        cout<<"1";
    }else{
        cout<<"0";
    }
    }

    return 0;
}