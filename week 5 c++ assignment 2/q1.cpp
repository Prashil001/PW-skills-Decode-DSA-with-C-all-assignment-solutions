#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x,count=0;
    cout<<"enter the value of x : ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
    }
    cout<<count<<" elements are greater than "<<x;
}