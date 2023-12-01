#include<iostream>
using namespace std;
int main(){
    //AP=4,7,10,13,16
    int d =3;
    int a =4;
    int n;
    cout<<"how many terms = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int an = a+(i-1)*d;
        cout<<an<<" ";
    }
    
}