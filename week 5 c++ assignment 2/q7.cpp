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
    int sum1=0,sum2=0;
    for(int i=0;i<=(n/2);i++){
        sum1+=arr[i];
    }
    for(int i=n-1;i>=(n/2);i--){
        sum2+=arr[i];
    }
    if(sum1==sum2) cout<<"array is palindrome";
    else cout<<"not palindrome";
}