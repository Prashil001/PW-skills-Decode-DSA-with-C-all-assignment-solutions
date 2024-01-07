#include<iostream>
using namespace std;
int main(){
    int n=5;
    int x = n+1;
    for(int i=1;i<=2*n+1;i++){
        for(int j=1;j<=2*n+1;j++){
            int a = i;
            int b = j;
            if(i==x || j==x) cout<<"*";
            else if(a>x && b>x){
                a = 2*x-i;
                b = 2*x-j;
                if(a+b==x+1) cout<<"*";
                else cout<<" ";
            }
            else if(a>x){
                a = 2*x-i;
                if(a+j==x+1) cout<<"*";
                else cout<<" ";
            }
            else if(b>x){
                b = 2*x-j;
                if(b+i==x+1) cout<<"*";
                else cout<<" ";}
            else{
                if(i+j==x+1) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
}