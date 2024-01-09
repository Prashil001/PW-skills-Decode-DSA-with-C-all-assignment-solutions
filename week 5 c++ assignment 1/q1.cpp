#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int pr = 1;
    for(int i=0;i<n;i++){
        pr*=arr[i];
    }
    cout<<pr;

}