#include<iostream>
using namespace std;
int main(){

//determine whether the number is even or odd
int a;
cout<<"Enter the number a:";
cin>>a;

if(a%2==0){
    cout<<"The number entered is even";

}
else if((a+1)%2==0){
        cout<<"The number entered is odd";
}

}
