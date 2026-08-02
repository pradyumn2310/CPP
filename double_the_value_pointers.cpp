#include<iostream>
using namespace std;
void DoubleValue(int* ptr){
    *ptr=2*(*ptr);// we will have to do it in this way or else we hvae to be multiplying the address which is not permitted in cpp


}
int main(){
    int a;
    cout<<"Enter the number you want to double:";
    cin>>a;

DoubleValue(&a);//here we use the address because the ptr expects a address to update the value of the variable.
cout<<"the value doubled is:"<<a<<endl;


return 0;
}
