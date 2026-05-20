#include <iostream>
using namespace std;
int main()
{
    int n,j,i;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0||i==n-1||i==n-1-j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}