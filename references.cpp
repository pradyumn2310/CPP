#include<iostream>
using namespace std;

int main(){
int a= 5;
int& ref=a;// the formate for using a reference is int& they should not be separeted and along with that do no confuse it with the address of because
//it is int &ref not int& ref
//once we refer any variable that cannot be changed later in the code that will give an error so you can refer any varuable once with on reference


cout<<ref<<endl;
}
