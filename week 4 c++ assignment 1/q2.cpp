#include<iostream>
using namespace std;
float area(int r){
    int ar = 3.14*r*r;
    return ar;
}
int main(){
    int radius;
    cout<<"radius : ";
    cin>>radius;
    cout<<area(radius);
}