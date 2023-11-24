#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the coordinates of x and y = ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"the point lies at the origin";
    }
    else if(x==0 && y!=0){
        cout<<"the point lies in the y axis";
    }
    else if(y==0 && x!=0){
        cout<<"the point lies in the x axis";
    }
    else{
        cout<<"point lies on the x-y plane";
    }
}