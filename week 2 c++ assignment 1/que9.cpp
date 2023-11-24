#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter any character = ";
    cin>>ch;
    int a = int(ch);
    if((a>=33 && a<=47)||(a>=58 && a<=64)||(a>=91 && a<=96)||(a>=123 && a<=126) ){
        cout<<"it is a special character";
    }
    else if((a>=65 && a<=90)||(a>=97 && a<=122)){
        cout<<"it is an alphabet";
    }
    else cout<<"it is a digit";
}