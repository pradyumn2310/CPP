#include<iostream>
using namespace std;

int main(){


/*
n=> number of terms
n<=0-> error

initilize two terme first=0 and second =1
long long first=0, second=1

for(int i =1;i<=n;i++){
    if(i==1){
        cout<<"first"<<first;=>1
        continue; this will be necessry because we want both of the loops to be true
    }
    if(i==2){
        cout"second"<<second;=> 2
    }
   long long next=first+second; 1+2=>3
    first=second;first=>2
    second=next;second=>3
}


*/

int n;
long long first{0}, second{1}, next{};

cout<<"Enter the number of terms: ";
cin>>n;

if(n<=0){
    cout<<"Error!";
    return 1;
}

for (int i=1;i<=n;i++){
    if(i==1){
        cout<<"first: "<<first;
        cout<<endl;
        continue;
    }
    if(i==2){
        cout<<"second: "<<second;
        cout<<endl;
        continue;
    }


    next=first+second;
    cout<<next<<endl;
    first=second;
    second=next;
}

return 0;

}
