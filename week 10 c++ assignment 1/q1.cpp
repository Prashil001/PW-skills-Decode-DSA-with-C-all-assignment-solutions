#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,6,7,7,7,8,8,9,14};
    int n = 12;
    int target = 8;
    int lo=0,hi=n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid+1]!=target){
                cout<<mid;
                flag = true;
                break;
            }
            else lo = mid+1;
        }
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    if(flag == false) cout<<-1;
}
