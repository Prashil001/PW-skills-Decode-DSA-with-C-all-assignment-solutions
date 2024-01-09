#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = false;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"contains duplicate";
    else cout<<"does not contain duplicate";

}