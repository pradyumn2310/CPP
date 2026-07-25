#include<iostream>
#include"Log.h"
using namespace std;
int main(){
    //this is for continue statement

for(int i=0;i<5;i++){

 if(i%2==0){
    continue;
}
Log("Hello!");
cout<<i<<endl;
}
cout<<endl;
cout<<"========================";
cout<<endl;
//this is for break statement, this is usually used in swtich cases for menu driven programs
for(int j=0;j<5;j++){

 if(j%2==0){
    break;
    cout<<endl;
}
Log("Hello!");
cout<<j<<endl;
//this piece of code will show no results but when we use for even results it will show result liek this

}
for(int j=0;j<5;j++){

 if((j+1)%2==0){
    break;
    cout<<endl;
}
Log("Hello!");
cout<<j<<endl;
//this piece of code will show no results but when we use for even results it will show result liek this

}

//now we will see return file type this is the most powerful statement
cout<<endl;
for(int j=0;j<5;j++){

 if((j+1)%2==0){
    return 0; // in this statement the function is ended at once without any questioning! this will only show even result and when we remove the j+1 t
    //then we get odd results

    cout<<endl;
}
Log("Hello!");
cout<<j<<endl;


}
}
