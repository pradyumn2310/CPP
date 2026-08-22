/*Digit Reverser: Given an integer (e.g., 1234), use a while loop with modulo (%) and division (/) operators
to print the digits in reverse order (4321).*/

#include<iostream>
using namespace std;

int main(){
int temp{},LastDigit{},number{};
cout<<"Enter the number you want to reverse: ";
cin>>number;

temp=abs(number);//this is to convert the negative number to the +ve number

if(temp==0){
    cout<<0;
}

while(temp>0){
    LastDigit=temp%10;// this operation gives the remainder like 1234%10= the remainder is 4
    cout<<LastDigit;// the remainder giets printed it
    temp/=10;//here the remainder is removed so that we can work on the next number
}

cout<<endl;
return 0;}
