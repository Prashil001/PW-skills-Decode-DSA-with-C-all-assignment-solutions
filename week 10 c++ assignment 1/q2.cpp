#include<iostream>
using namespace std;
int main(){
    int arr[] =  {0,0,0,0,1,1,1,1,1,1,1,1};
    int n = 12;
    int lo=0,hi=n-1;
    int a;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==1){
            if(arr[mid-1]!=1){
                a = mid;
                break;
            }
            else hi = mid-1;
        }
        else if(arr[mid]==0) lo = mid+1;
    }
    cout<<n-a;
    
    
}
