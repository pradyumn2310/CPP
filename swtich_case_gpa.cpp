/*write a program to get the gpa system*/

#include<iostream>
using namespace std;

int main(){
    char grade{};
    cout<<"Enter the grade:";
    cin>>grade;

    switch(grade){

        case 'A':
        case 'a':
            cout<<"A=4.0";
            break;

        case 'B' :
        case 'b':
            cout<<"B=3.0";
            break;
        case 'C' :
        case 'c':
            cout<<"C=2.0";
            break;
        case 'D' :
        case 'd':
            cout<<"Fail!";
            break;

        default:
            break;

            /*the technique used here is fall through logic*/




    }
}
