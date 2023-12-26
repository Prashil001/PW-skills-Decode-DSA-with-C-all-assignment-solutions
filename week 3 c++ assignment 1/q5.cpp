#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int last_digit =0;
    int sum = 0;
    while(n>0){
        last_digit = n%10;
        if(last_digit%2==0) sum += last_digit;
        n/=10;
    }
    cout<<sum;

}