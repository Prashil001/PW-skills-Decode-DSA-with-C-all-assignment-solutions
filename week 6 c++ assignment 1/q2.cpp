#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"rows = ";
    cin>>n;
    cout<<"columns = ";
    cin>>m;
    int matrix1[n][m];
    int matrix2[n][m];
    cout<<"enter elements of first matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"enter elements of second matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix2[i][j];
        }
    }

    //sum
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix1[i][j]+=matrix2[i][j];
        }
    }
    cout<<"sum of these two matrices is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
}