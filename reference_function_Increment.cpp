#include<iostream>
using namespace std;


/*void Increment_1(int value_1){
value++;
cout<<value<<endl;
}
*/

/*void Increment(int *value){
(*value)++;
cout<<*value<<endl;
cout<<&value<<endl;
}*/

void Increment(int& value){
value++;
cout<<"The value incremented is:"<<value<<endl;
// this function uses the reference we use int& as reference
}
int main(){
    // this is way one to do this
    int a=5;
    cout<<"Enter the number you want to increment:";
    cin>>a;
    //Increment(a); here we just used the direct name
    //Increment(&a);// here we using the address of the varibale to update it and then printing it.
    //lets do this using pointers

    Increment(a);

}
