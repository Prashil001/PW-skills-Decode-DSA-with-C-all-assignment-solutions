#include<iostream>
using namespace std;
int main(){
    int money;
    cout<<"enter ammount = ";
    cin>>money;

    int _500=0 ,_100=0 ,_50=0 ,_20=0 ,_10=0 ,_5=0 ,_2=0 ,_1 = 0;
    switch(money>=500){
        case 1: _500 = money/500; money = money - _500*500;
        cout<<"500 note = "<<_500<<endl;
    }
    switch(money>=100){
        case 1: _100 = money/100; money = money - _100*100;
        cout<<"100 note = "<<_100<<endl;
    }
    switch(money>=50){
        case 1 : _50 = money/50; money = money - _50*50;
        cout<<"50 note = "<<_50<<endl;
    }
    switch(money>=10){
        case 1 : _10 = money/10; money = money - _10*10;
        cout<<"10 note = "<<_10<<endl;
    }
    switch(money>=5){
        case 1: _5 = money/5; money = money - _5*5;
        cout<<"5 coin = "<<_5<<endl;
    }
    switch(money>=2){
        case 1 : _2 = money/2; money = money - _2*2;
        cout<<"2 coin = "<<_2<<endl;
    }
    switch(money>=1){
        case 1 : _1 = money/1; money = money - _1;
        cout<<"1 coin = "<<_1;
    }

    

    
}