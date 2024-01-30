#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //5 4 3 2 1
    int target;
    cout<<"enter your target element : ";
    cin>>target;

    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid] == target){
            cout<<"element is present at "<<mid<<" index";
            flag = true;
            break;
        }
        else if(v[mid]>target) lo = mid+1;
        else hi = mid-1;
    }
    if(!flag) cout<<"element not found";

}