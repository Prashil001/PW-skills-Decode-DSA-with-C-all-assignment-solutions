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
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"sorted array";
    else cout<<"not sorted array"; 
}