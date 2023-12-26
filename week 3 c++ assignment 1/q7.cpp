#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int fac = 1;
        for(int j=i;j>0;j--){
            fac *=j;
        }
        cout<<fac;
        cout<<endl;
    }
}