#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    
    int lo = 1;
    int hi = n;
    bool flag =  false;
    while(lo<=hi){
        int k = lo+(hi-lo)/2;
        int m = k*(k+1)/2;
        if(m==n){
            flag = true;
            cout<<k;
            break;
        }
        else if(m>n) hi = k-1;
        else lo=k+1;
    }
    if(flag == false) cout<<hi;
}