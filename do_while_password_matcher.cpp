/*Password Matcher: Prompt the user to set a password, then use a
do-while loop to make them re-enter it until both inputs match.*/

#include<iostream>
using namespace std;

int main(){
string password;
cout<<"Enter password: ";
cin>>password;



string guess_password;

do{
    cout<<"Enter the correct password: ";
    cin>>guess_password;


}
while(guess_password!=password);{

    cout<<"Correct Password";


}

return 0;
}
