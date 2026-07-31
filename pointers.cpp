#include<iostream>
using namespace std;
int main(){
//void* ptr=0;// this is null pointer which points to nothing and this pointer is invalid

int var=8;
int *ptr=&var;
// this is something when we read the address of the varibale var using the pointer
cout<<ptr<<endl;// this stores the address of the variable we created as var.
cout<<var<<endl;// this will print the value of the varuable we entered

// now if we want to change the value of the variable using the pointer we should derefernece it using *ptr
*ptr=5;
cout<<var<<endl;
//this is the correct way of changing the value of the variable using the pointers

int b;
cout<<"enter the value of b:";
cin>>b;
*ptr=b;
cout<<var;
return 0;

}
