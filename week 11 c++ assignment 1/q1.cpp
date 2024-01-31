#include<iostream>
using namespace std;
int sum_odd(int a, int b){
    if(b==a-1) return 0;
    if(b%2!=0) return b+ sum_odd(a,b-1);
    else sum_odd(a,b-1);
}
int main(){
    cout<<sum_odd(8,26);
}