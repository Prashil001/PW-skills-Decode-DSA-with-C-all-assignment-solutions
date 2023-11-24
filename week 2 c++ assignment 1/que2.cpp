#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Radius = ";
    cin>>r;
    float pi = 3.14;
    float area = pi*r*r;
    float circum = 2*pi*r;
    if(area>circum) cout<<"area is greater than circumference";
    else cout<<"circumference is greater than area";
}