#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max1,max2;
    max1=max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            max2 = max1;
            max1 = arr[i];
        }
        else if(max2<arr[i] && max1!=arr[i]){
            max2 = arr[i];
        }

    }
    cout<<max2;

}