#include<iostream>
using namespace std;


void doublePointer(int** pp){

    **pp = 900;

    // receiving single pointer address
    // we simply change the value of A 
    // because we made change val of single pointer 
    // but single pointer hold the address of A thus it reflected
}

int main(){

    int a = 20;
    int* p_a = &a;

    cout<<a<<endl;

    doublePointer(&p_a);// we simply pass the address of single pointer

    cout<<a<<endl;

    return 0;
}