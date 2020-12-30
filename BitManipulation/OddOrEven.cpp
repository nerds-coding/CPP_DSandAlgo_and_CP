#include<iostream>
using namespace std;

int main(){
    int a= 0;
    cout<<"Enter a Number to check it's Even or Odd"<<endl;
    cin>>a;

    cout<<(a&1)<<endl;// if it's last bit is one than it's odd otherwise it's even(even gives = 0)
    if (!(a & 1)){ 
        cout<<"It's Even Number"<<endl;
    }else{
        cout<<"It's Odd Number"<<endl;
    }

    return 0;
}