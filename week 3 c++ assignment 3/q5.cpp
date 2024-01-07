#include<iostream>
using namespace std;
int main(){
    int n=4;
    int a=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<a;
        if(a>i) a--;
        else a++;
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i=1;i<=m;i++){
        int a = 1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp+=2;
        a = n-i;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a--;
        }
        cout<<endl;
    }
}