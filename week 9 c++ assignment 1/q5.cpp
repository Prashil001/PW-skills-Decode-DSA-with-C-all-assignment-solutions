#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"vector size : ";
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
        }
        
    }
    cout<<flag;

}