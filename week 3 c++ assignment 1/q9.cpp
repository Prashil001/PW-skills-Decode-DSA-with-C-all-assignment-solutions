#include<iostream>
using namespace std;
int main(){
 
    
    for(int i = 1;i<=500;i++){
        int sum=0;
        int cube=0;
        int last_digit = 0;
        int b = i;
        while(b>0){
            last_digit=b%10;
            cube = last_digit*last_digit*last_digit;
            sum +=cube;
            b/=10;
        }
        if(sum==i) cout<<i<<" ";
    }

    

}