#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Length = ";
    cin>>l;
    cout<<"breadth = ";
    cin>>b;
    int area = l*b;
    int para = 2*(l+b);
    if(area>para) cout<<"Area is greater than parimeter";
    else cout<<"parimeter is greater than area";
}