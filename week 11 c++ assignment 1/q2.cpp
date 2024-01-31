#include<iostream>
using namespace std;
int ways(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 5;
    return ways(n-1)+ways(n-2)+ways(n-3);
}
int main(){
    cout<<ways(10);
}