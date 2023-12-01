#include<iostream>
using namespace std;
int main(){
    int A=65;
    cout<<"For Upper case alphabets:"<<endl;
    while(A<=90){
        cout<<A<<"="<<char(A)<<endl;
        A++;
    }
    int a= 97;
    cout<<"For Lower case alphabets"<<endl;
    while(a<=122){
        cout<<a<<"="<<char(a)<<endl;
        a++;
    }
}