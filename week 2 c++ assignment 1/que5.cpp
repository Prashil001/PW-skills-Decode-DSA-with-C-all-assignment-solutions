#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"side1 = ";
    cin>>s1;
    cout<<"side2 = ";
    cin>>s2;
    cout<<"side2 = ";
    cin>>s3;
    if(s1==s2 &&  s3==s2){
        cout<<"triangle is equilateral";
    }
    else if(s1==s2 || s1==s3 || s2==s3){
        cout<<"triangle is isosceles";
    }
    else{
        cout<<"triangle is scalene";
    }
}