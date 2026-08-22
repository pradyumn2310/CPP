/*we will be writing a program for making a count down timer*/

#include<iostream>
using namespace std;
int main(){
//we initialize an integer that says the starting nummber to start out count down timer.
int start_number{5};
//we should while loop for this type oof problem for an easy syntax and easy execution.
while(start_number>=1){
        //if we change the argument inside the while loop this code will give us different outputs with >=1 it gives us right results
        //but when we change it to <= it gives us no results
        // and when we do start_number=1 then it just prints 1 infintely.
    cout<<start_number<<" ";
    start_number--;
}

cout<<endl;
cout<<endl;

// we can an user input to enter the start number as follows:

int start_number_2{};
cout<<"Enter the start number to initiate the count down timer: ";
cin>>start_number_2;

while(start_number_2>=1){// this means jb tk (start_number_2 )1 se bada ya equal na ho jaaye yeh execute hota rhega- just to make it easy to understand
    cout<<start_number_2<<" ";
    start_number_2--;
}
return 0;}
