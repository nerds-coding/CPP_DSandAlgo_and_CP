#include<iostream>
using namespace std;

int main(){
    int a = 10;// simply declaring a variable "a" with initial value with 10

    cout<<"Vaue of A : "<<a<<endl;
    cout<<"Address of A : "<<&a<<endl;
    cout<<endl;

    int* p_a; // declaring pointer
    p_a = &a;  // pointer store address only 
    // so we are providing address to pointer

    cout<<"Pointer P_A : "<<p_a<<endl; // it will show address of  "a"
    cout<<"Value of \"A\" through Pointer : "<<*p_a<<endl;
    cout<<"Address of Pointer : "<<&p_a<<endl;

    cout<<endl;
    cout<<endl;

    *p_a = 222;// changing value by pointer
    cout<<a<<endl;
    return 0;
}