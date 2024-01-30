#include<iostream>
#include<vector>
using namespace std;
int main(){
    // 1 2 3 
    // 4 5 6
    // 7 8 9
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cout<<"enter target element : ";
    cin>>target;
    bool flag;
    for(int i=0;i<3;i++){
        flag = false;
        int lo = 0,hi=2;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(matrix[i][mid] == target){
                flag = true;
                cout<<"element is at ("<<i<<" "<<mid<<") index";
                break;
            }
            else if(matrix[i][mid]>target) hi = mid-1;
            else lo = mid+1;
        }
        if(flag) break;
    }
    if(!flag) cout<<"element not found";
    

}