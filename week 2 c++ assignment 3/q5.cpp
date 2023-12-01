#include<iostream>
using namespace std;
int main(){
    //gp = 3,12,48,...
    int a = 3;
    int n;
    cout<<"no of terms = ";
    cin>>n;
    for(int i=1;i<=n;i++,a*=4){
        cout<<a<<" ";
    }
}