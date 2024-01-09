#include<iostream>
#include<vector>
#include<algorithm>
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

    for(int i=0;i<n;i++){
        if(i%2==0) arr[i]*=arr[i];
        else arr[i]+=10;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}