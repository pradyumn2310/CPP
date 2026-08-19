#include<iostream>
using namespace std;

int main(){
     int month_number;
     cout<<"Enter the month number:";
     cin>>month_number;

     switch(month_number){
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
        cout<<"31 days!";
        break;

    case 4:
    case 6:
    case 8:
    case 10:
        cout<<"30 days!";
        break;

    case 2:
        cout<<"28 or 29 days!";
        break;

    default:
        break;



     }

return 0;
}
