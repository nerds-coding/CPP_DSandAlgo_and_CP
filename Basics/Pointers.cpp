#include<iostream>
using namespace std;

//pointers are used to store addresses rather than values.

int main(){

    int i=20;//declaring normal variable
    int j = 40;

    int *a; //declaring pointers
    int* b,c;//another way to declare pointers

    a = &i;//assigning address of variable i to Pointer a

    cout<<"Printing Pointer A\t"<<a<<endl;// simply printing the address
    cout<<"Printing Pointer A\t"<<*a<<endl; // Accessing the value of variable through pointer with *

    cout<<"Printing Address of Variable I\t"<<&i<<endl;
    cout<<"Printing Address of Variable J\t"<<&j<<endl;


    // Assigining Value to Variable through Pointer
    
    *a = 2;
    cout<<"Printing Changed Value of Variable I\t "<<i<<endl; // output =2 
    // Because pointer a was pointing to address not to value thus pointer a directly access the address and change the value
    

    return 0;
};