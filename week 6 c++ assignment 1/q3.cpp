#include<iostream>
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

    int l1,r1,l2,r2;
    cout<<"enter the coordinates : "<<endl;
    cout<<"enter first coordinate(l1,r1) : ";
    cin>>l1>>r1;
    cout<<"enter second coordinate(l2,r2) : ";
    cin>>l2>>r2;

    int sum = 0;
    for(int i=l1-1;i<=l2-1;i++){
        for(int j=r1-1;j<=r2-1;j++){
            sum+=matrix1[i][j];
        }
    }

    cout<<sum;
    
}