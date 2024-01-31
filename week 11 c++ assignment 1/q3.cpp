#include<iostream>
using namespace std;
int pow_2(int n,int a){
    if(a==n){
        cout<<"true";
        return a*=1;
    }
    else if(a>n){
        cout<<"false";
        return a*=1;
    }
    return pow_2(n,a*=2);
    
}
int main(){
    pow_2(3,1);
}