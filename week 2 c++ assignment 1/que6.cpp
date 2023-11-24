#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter values of A,B and c = ";
    cin>>a>>b>>c;
    if(a<b&&a<c){
        cout<<"A has the least marks";
    }
    else if(b<a && b<c){
        cout<<"B has the least marks";
    }
    else{
        cout<<"C has the least marks";
    }

}