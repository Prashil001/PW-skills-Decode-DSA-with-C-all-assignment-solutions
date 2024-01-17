#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int k;
    cout<<"value of k : ";
    cin>>k;
    int n;
    cout<<"size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        count++;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
        if(count==k){
            cout<<arr[i];
            break;
        }
    }
}