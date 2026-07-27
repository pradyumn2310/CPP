#include<iostream>
using namespace std;

int main(){
int score;
cin>>score;

if(score>=90){
    cout<<"The student's grade is A";
}
else if(score>=75 && score<=89){
    cout<<"The student's score is B";
}
else if(score>=50 && score<=74){
    cout<<"The student's score is C";
}
else{
    cout<<"The student is fail!";
}
}
