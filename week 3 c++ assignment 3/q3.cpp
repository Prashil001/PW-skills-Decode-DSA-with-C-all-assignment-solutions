#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i-1;j>=1;j--){
            if(i!=1) cout<<char(j+65);
        }
        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }
        cout<<endl;
    }
}