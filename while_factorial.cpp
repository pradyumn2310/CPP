/* 4!= 4x3x2x1=24
n=4
while(n!=1)
factorial*=n;
4 *
n--;
*/
#include<iostream>
using namespace std;

int main(){

int n{};
unsigned long long factorial{1};// we use this so that we do not overflow the memory.
cout<<"Enter the number for factorial: ";
cin>>n;

if(n<0){
    cout<<"This is a negative number. Error!"<<endl;
    return 1;
}


while(n>1){
    factorial*= n;
    n--;
}
cout<<factorial;
return 0;}
