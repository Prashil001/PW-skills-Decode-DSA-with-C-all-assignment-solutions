#include<iostream>
using namespace std;
void digits(int a){
    int count = 0;
    while(a>0){
        a/=10;
        count++;
    }
    cout<<count;
}
int square(int a){
    return a*a;
}
int main(){
    int a;
    cout<<"a : ";
    cin>>a;

    digits(a);
    cout<<endl;
    cout<<square(a);
}