/*no we will be using if else in the pre processor */
#include<iostream>
#if 1
int Mul(int a, int b){
int result=a*b;
cout<< result;
}
#endif // 1
using namespace std;

int main(){
    Mul(5,4);
return 0;
}
