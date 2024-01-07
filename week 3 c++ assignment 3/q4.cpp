#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=2*n-1;i++){
        cout<<char(64+i);
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i=1;i<=m;i++){
        int a = 65;
        for(int j=1;j<=m+1-i;j++){
            cout<<char(a);
            a++;
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        for(int j=1;j<=m+1-i;j++){
            cout<<char(a);
            a++;
        }
        cout<<endl;
    }
}