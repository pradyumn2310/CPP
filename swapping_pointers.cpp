#include<iostream>
using namespace std;
int main(){
int a =5;
int b=6;

int *ptr_a=&a;
int *ptr_b=&b;

cout<<ptr_a<<endl;
cout<<ptr_b<<endl;

//now we  will be updateing the pointers by dereferencing them


ptr_a=&b;
ptr_b=&a;

cout<<*ptr_a<<endl;
cout<<*ptr_b<<endl;

return 0;
}
