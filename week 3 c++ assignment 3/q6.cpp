#include<iostream>
using namespace std;
int main(){
    int n=5;
    int nsp = 2*n-3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i==j || i+j==n*2) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    
}