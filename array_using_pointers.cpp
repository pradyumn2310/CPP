#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i;
    cout<<"enter the number you want to acces from 0 to 9:";
    cin>>i;//this will take the input and then we can enter it in the int* arrayy=&arr[i] so that it prints it when we want it
    int* arrayy= &arr[i];// this code stores the address of the first element in the array and this will print 1

    cout<<"The first element in the array is:"<<*arrayy;//when we want to access the value of the pointer we use * and when the address is needed to be accesses
    // we use &

    return 0;
}
