#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int nst = 1;
    int nsp = n-1;
    for(int i=1;i<=n;i++){
        int a = 65;
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            cout<<char(a);
            a++;
        }
        nst+=2;
        cout<<endl;
    }
}