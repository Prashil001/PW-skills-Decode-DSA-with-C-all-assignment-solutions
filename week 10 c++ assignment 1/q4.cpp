#include<iostream>
using namespace std;
int main(){
    int arr[] =  {1,2,3,4,4};
    int n = 5;
    int lo=0,hi=n-1;
    int x;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]-mid==1) lo = mid+1;
        else hi = mid-1;
        x = mid;
    }
    cout<<arr[x];
    
}
