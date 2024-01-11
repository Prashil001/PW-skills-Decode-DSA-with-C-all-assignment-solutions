#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"rows = ";
    cin>>n;
    cout<<"columns = ";
    cin>>m;
    int matrix1[n][m];
    cout<<"enter elements of matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix1[i][j];
        }
    }

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<matrix1[i][j]) max = matrix1[i][j];
        }
    }

    cout<<max;
    
    
}