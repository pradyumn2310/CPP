/*Sum of Numbers: Write a program that repeatedly asks the user to enter numbers.
Keep adding them together in a total variable.
The loop should stop when the user enters 0, then display the final total.*/
#include<iostream>
using namespace std;

int main(){
    int user_input_number{};
    cout<< "Enter the number to start the addition (Enter 0 to stop!): ";
    cin>>user_input_number;

    int total{0};

    while(user_input_number!=0){// yeh loop tb tk run hoga jb tk tum 0 na enter kr do
        total+=user_input_number;// aur += is used ki tu ussi number mein naya number add kroge
        cout<< "Enter the number to start the addition (Enter 0 to stop!): ";
        cin>>user_input_number;

    }
    cout<<"The total of the addition is: "<<total;

return 0;
}
