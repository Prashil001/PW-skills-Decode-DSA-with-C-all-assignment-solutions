#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"enter the point 1 coordinates = ";
    cin>>x1>>y1;
    cout<<"enter the point 2 coordinates = ";
    cin>>x2>>y2;
    cout<<"enter the point 3 coordinates = ";
    cin>>x3>>y3;

    float m1 = (y2-y1)/(x2-x1);
    float m2 = (y3-y2)/(x3-x2);

    if(m1==m2){
        cout<<"All the three points lie on the same line";
    }
    else cout<<"does not lie on same line";

}