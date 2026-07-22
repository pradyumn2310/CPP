#include<iostream>
using namespace std;

void Log(const char* message){
cout<<message<<endl;
/*we added a function named Log here and it got compiled when called in the main function when the value was passed. Now we are going to remove this definition
of the function and add it in a header fil as Log.h and include it here directly and try to run the same command and check  whether it works or not*/
}
int main(){
cout<<"Hi, there I am Paddy!"<<endl;
Log("Hello world!");
return 0;
}
