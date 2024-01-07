#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            int b=j;
            if(b>n){
                b = 2*n-j;
                if(i+b==n+1) cout<<i;
                else cout<<" ";
            }
            else{
                if(i+j==n+1) cout<<i;
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    
    
}