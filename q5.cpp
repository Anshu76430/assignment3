#include<iostream>
using namespace std;
int main(){
char ch;
int num1,num2;
cout<<"select the operator(+ , - ,* ,/ )";
cin>>ch;
cout<<"enter the numbers";
cin>>num1>>num2;
switch(ch){
    case '+':
        cout<<"sum="<<num1+num2;
        break;

     case '-':
        cout<<"subtract ="<<num1-num2;
        break;

     case '*':
        cout<<"multiply="<<num1*num2;
        break;

     default :
        cout<<"division"<<num1/num2;
}
return 0;
}
