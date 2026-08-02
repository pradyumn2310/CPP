#include<iostream>
using namespace std;
void reverse_array(int* arr, int size){

int* left=arr;// this points to the first element
int* right=arr+size-1;// this points to the last element of the array

while(left<right){// we use while loop until the condition is attained and the condition is until left<right when left==right then the statement becomes false
    int temp=*left;
    *left=*right;
    *right=temp;

    *left++;// this moved right to net element

    *right--;// this moved left to the previous element
    }
}
int main(){
int numbers[]={1,2,3,4,5,6,7,8,9,10};
int size=sizeof(numbers)/sizeof(numbers[0]);// this is used to calculate the size of the array
//since 10 elements= 4X10=40 and size of number[0]=4 so 40/4=10
cout<<"this is the oringnal array"<<endl;
for(int i=0;i<size;i++){
    cout<<numbers[i]<<"  ";
}

cout<<endl;

reverse_array(numbers, size);

cout<<"reversed array"<<endl;
for(int i=0;i<size;0i++){
    cout<<numbers[i]<<"  ";
}


return 0;}
