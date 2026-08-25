/*Running Average Calculator: Continuously prompt the user for exam scores.
Keep track of the sum and the total count of scores entered.
Stop when the user enters -1 and print the final average (excluding the -1).*/

#include<iostream>
using namespace std;

int main(){
int total{0};
int total_input{0};
int counts{0};
int average{0};

do{
    cout<<"Enter the number to add to the operaiton: ";
    cin>>total_input;
    if(total_input!=-1){
    total+=total_input;
    counts++;
    }
}
while(total_input!= -1);
cout<<"The total of the added is: "<<total<<endl;
cout<<"The total count is: "<<counts<<endl;
average= total/counts;
cout<<"The total average will be: "<<average<<endl;

return 0;
}
