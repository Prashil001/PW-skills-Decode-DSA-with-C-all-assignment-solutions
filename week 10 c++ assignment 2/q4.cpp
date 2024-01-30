#include<iostream>
#include<vector>
using namespace std;


bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0,hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid] == target) return true;
            else if(nums[mid] == nums[lo]) lo++;
            else if(nums[mid] == nums[hi]) hi--;
            else if(nums[mid]<nums[hi]){
                if(target>=nums[mid] && target<=nums[hi]) lo = mid+1;
                else hi = mid-1;
            }
            else{
                if(target>=nums[lo] && target<=nums[mid]) hi = mid-1;
                else lo = mid+1;
            }
        }
        return false;


}
int main(){
    // 7,8,9,1,2,3,4,5,6
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"enter your target element : ";
    cin>>target;
    cout<<search(v,target);
}