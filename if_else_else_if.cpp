//this file is about coding if else statements
#include<iostream>
#include"Log.h"
using namespace std;

int main(){

int x=5;
//this is using the bool technique

bool comparisionResult=x==5;
if(comparisionResult){
    Log("True it is!");
}
else{
    Log("Failed!");
}



//lets use either 1 or 0
if(0){
    Log("Again true it is!");
    cout<<endl;
}
else{
        cout<<endl;
    Log("Shit Failed !");
}

//now we will use else if statement using pointers
const char* ptr="Hello";
if(!ptr){// this statement ssays that the condition given above is true so the else if statement will not run. We can change this loop according to our own joy

    Log(ptr);
    cout<<endl;
}
else if(ptr=="Hello"){
        cout<<endl;
    Log("Else if it is!");

}
else{
    Log("ptr is null!");
    cout<<endl;
}

return 0;}
