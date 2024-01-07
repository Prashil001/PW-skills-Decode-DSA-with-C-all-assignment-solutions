#include<iostream>
using namespace std;
int main(){
    int n=3;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i;
            int b = j;
            if(a>n && b>n){
                a = 2*n-i;
                b = 2*n-j;
                if(a+b==n+1) cout<<"*";
                else cout<<" ";
            }
            else if(a>n){
                a = 2*n-i;
                if(a+j==n+1) cout<<"*";
                else cout<<" ";
            }
            else if(b>n){
                b = 2*n-j;
                if(b+i==n+1) cout<<"*";
                else cout<<" ";}
            else{
                if(i+j==n+1) cout<<"*";
                else cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    
}