#include<iostream>
#include <cstring>// this should be included if you are suing memset
using namespace std;
int main(){
// we will be taking char as this is one byte

char* buffer= new char[8];// 8bytes of memeory is allocated here now

memset(buffer,0,8);// the memory is allocated here and when thw job is donwe should delete the memory

delete[] buffer;

//there are double pointer as well; where one pointer points to the pointer pointing to a variable

char** ptr=&buffer;
cout<<ptr;
}
