/*write a menu driven program to create an ATM Machine wizard*/
#include<iostream>
using namespace std;

int main(){


int atm_option{};
int atm_balance{1000};
int atm_operation{};
while(atm_option!=4){
cout<<"Enter the option below \n 1. View Balance \n 2.Deposit Funds \n 3.Withdraw Funds \n 4.Exit";
cin>>atm_option;



 switch(atm_option){

case 1:
    cout<<"Balance: $1000";
break;

case 2:

    cout<<"Your current account balance: \n"<<atm_balance;
    cout<<"Enter the amount you want to add in your account: ";
    cin>>atm_operation;
    cout<<atm_balance+atm_operation;
    cout<<"You balance after deposit: \n"<<atm_balance;
    break;

case 3:
     cout<<"Your current account balance: \n"<<atm_balance;
     cout<<"Enter the amount you want to add in your account: ";
     cin>>atm_operation;
     cout<<atm_balance-atm_operation;
     break;

case 4:
    break;
 }

}
return 0;
}
