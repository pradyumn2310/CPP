/*creating a basic calculator using switch case*/
#include<iostream>
using namespace std;

int main(){
float num_1{} ,num_2{};
cout<<"Enter num_1 and num_2 \n";
cin>>num_1>>num_2;

char operation;
cout<<"Enter the operation you want to execute: '+', '-',  '/', '*' ";
cin>>operation;

switch(operation){
case '+':
    cout<<num_1+num_2;
    break;

case '-':
    cout<<num_1-num_2;
    break;


case '/':
    cout<<num_1/num_2;
    break;

case '*':
    cout<<num_1*num_2;
    break;

default:
    cout<<"Invalid!";
    break;

}
return 0;
}
