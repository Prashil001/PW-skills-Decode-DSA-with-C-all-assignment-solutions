#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    
    int n;
    cout<<"size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            float s = ((arr[i]+arr[i+1])/2.0);
            kmin = max(kmin,s);
        }
        else{
            float s = ((arr[i]+arr[i+1])/2.0);
            kmax = min(kmax,s);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }

    if(flag == false ) cout<<-1;
    else if(kmin == kmax){
        if(kmin-(int)kmin == 0){
            cout<<"there is only one value of k : "<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin-(int)kmin > 0){
            kmin = (int)kmin +1;
        }
        cout<<"Range of k is : ["<<kmin<<","<<(int)kmax<<"]";
    }

}