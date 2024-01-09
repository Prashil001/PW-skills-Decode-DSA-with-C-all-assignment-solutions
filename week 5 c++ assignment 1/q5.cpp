#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements of array in sorted order";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool flag = false;
    int x = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            flag = true;
            cout<<x;
            break;
        }
        else x++;
    }
    if(flag == false) cout<<x;
}