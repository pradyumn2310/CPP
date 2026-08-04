#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str="Kanav Bhardwaj";
    reverse(str.begin(), str.end());

     string reversed_str=str;
    cout<<"Reversed String:"<<reversed_str;
}
