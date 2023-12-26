#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,n;
    cout<<"n = ";
    cin>>n;
    cout<<"0 1 ";
  
    for(int i=2;i<=n;i++){
        int sum = a+b;
        a = b;
        b = sum;
        cout<<b<<" ";
    }
    
   

    
}