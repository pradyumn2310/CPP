/*We wil be playing with the Pre processor statements now*/
#include<iostream>
#define Integer int /* this statement will look the keyword Integer as int now onwards in this code*/

using namespace std;
Integer Mutiply(Integer a, Integer b){
Integer result;
result=a*b;
cout<<result<<endl;
}

int main(){
    Mutiply(2,4);





return 0;
}
