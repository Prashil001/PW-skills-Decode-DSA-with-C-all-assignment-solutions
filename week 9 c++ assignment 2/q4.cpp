#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5,3,2,6,1};
    int n = 5;

    //first minimum number
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    int x1 = 0;
    for(int i=0;i<n;i++){
        x1*=10;
        x1+=arr[i];
    }

    //last second minimum number 
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }

    }
    int x2 = 0;
    for(int i=0;i<n;i++){
        x2*=10;
        x2+=arr[i];
    }

    cout<<x2+x1;



}