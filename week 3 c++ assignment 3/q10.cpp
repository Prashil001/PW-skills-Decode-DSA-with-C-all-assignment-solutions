#include<iostream>
using namespace std;

int main(){
    int n=4;
    int nsp = n+1;
    int m = n-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp-=2;
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++) cout<<"*";
    cout<<endl;
    for(int i=1;i<=2*n-1;i++) cout<<"*";
    cout<<endl;
    nsp = 1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp+=2;
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
