#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][4] = {{0,0,0,0},{0,1,1,1},{0,0,1,1}};
    int n = 3;
    int idx = -1;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        int a,count;
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[i][mid]==1){
                if(arr[i][mid-1]!=1){
                    a = mid;
                    break;
                }
                else hi = mid-1;
            }
            else if(arr[i][mid]==0) lo = mid+1;
        }
        count = 4-a;
        if(max<count){
            max = count;
            idx = i;
        }
    }
    cout<<idx;
    
    
}
