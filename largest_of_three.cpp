#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b;
cin>>c;


if(a>=b && a>=c){
    cout<<"The largest number is a"<<a;
}
else if(b>=a && b>=c){
    cout<<"The largest number is b"<<b;

}
else{
    cout<<"The largest number is c: "<<c;
}
//to compare more than two things we can use this method as this can help us in a faster way
// we use && || as and and or and ! as not
//here we used && and this means when the previous statement is true only then it moves to the next statement

}
