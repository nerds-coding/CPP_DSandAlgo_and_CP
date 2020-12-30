#include<iostream>
using namespace std;

int main(){

    cout<<"Enter a number"<<endl;
    int a;
    cin>>a;

    cout<<a<<"  Divide by 2 =  ";
    cout<<(a>>1)<<endl;

    cout<<"2 to the power  "<<a<<"  =  ";
    cout<<(1<<a)<<endl;

    return 0;
}