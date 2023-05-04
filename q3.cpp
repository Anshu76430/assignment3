#include<iostream>
using namespace std;
int main(){
int sp,cp,gain,loss;
cout<<"enter the cost price and selling price";
cin>>cp>>sp;
if(sp>cp){
    gain=sp-cp;
    cout<<"gain :"<<gain;
    }
else{
    loss=cp-sp;
    cout<<"loss:"<<loss;}
    return 0;
    }
