#include<iostream>
using namespace std;
int main(){
    char ch1,ch2;
    cout<<"character 1 = ";
    cin>>ch1;
    cout<<"character 2 = ";
    cin>>ch2;
    int diff = int(ch1) - int(ch2);
    cout<<"the difference in the ascii values of these two characters is "<<diff;
    
}