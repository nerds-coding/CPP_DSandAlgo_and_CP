#include<iostream>
#include<stdlib.h> // to import dynamic merrory allocation
using namespace std;

int main(){
    // as from name "malloc" stands for Memory Allocation 
    // malloc's return type is pointer thus we're using pointer;
    // the return type of malloc is null
    int* p;

    p = (int*)malloc(10*sizeof(int));
    // we want 10 new size but of int format
    // 1 int = 4 bytes, so we'll allocate total of 4*10 = 40 bytes of block
    // each block will be of 4bytes of int;

    // malloc return void pointer, but we type casting into "int"
    // because our pointer is also "int";

    // so now our pointer will act as "INT ARRAY OF 10 SIZE";

    for(int i =0;i<10;i++){
        p[i]=i;
    }


    cout<<"Values Are"<<endl;
    for(int i = 0 ;i<10;i++){
        cout<<p[i]<<endl;
    }

    //Now suppose we want some more value to allocate 
    // so we use realloc to append new blocks of memory
    p = (int*)realloc(p,10*sizeof(int)); // return type of realloc is same as malloc

    for(int i = 10 ;i<20;i++){
        p[i] = i;
    }

    for(int i = 10 ;i<20;i++){
        cout<<p[i]<<endl;
    }

    free(p); // free function is used to de-allocate the unused memory if not used
    // it also help to prevent from memory losses
    return 0;


    // while allocating blocks malloc doesn't provide any default value
    // so if we try to access the values before assigining value
    // then it will throw segmentation fault error

    // thus we use calloc which allocate 0 as default value to each block of memory

    // alternative of malloc and calloc is "memeset" which also allocate a value to blocks by default
    

    // Malloc is faster than both of the function like Calloc and memset;
}