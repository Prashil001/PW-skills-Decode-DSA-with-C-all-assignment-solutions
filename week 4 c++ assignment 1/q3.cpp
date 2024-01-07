#include<iostream>
using namespace std;
void odd_bet(int a,int b){
    for(int i=a+1;i<b;i++){
        if(i%2!=0) cout<<i<<" ";
    }
}
int main(){
    int a,b;
    cout<<"a,b : ";
    cin>>a>>b;
    odd_bet(a,b);
}