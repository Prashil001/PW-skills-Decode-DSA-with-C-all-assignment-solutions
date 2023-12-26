#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the given number: ";
    cin>>n;
    int p = n;

    // for reverse:
    int r=0;
    int last_digit = 0;
    while(n>0){
        last_digit = n%10;
        r*=10;
        r+=last_digit;
        n/=10;
    }
    
    //sum:
    int sum = r+p;
    cout<<sum;


}