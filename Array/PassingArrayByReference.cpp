#include<iostream>
using namespace std;

void sampleFunction(int arr[],int j,int size){

    for(int i =0;i<size;i++){
        arr[i] = j;
    }
}

int main(){

    int arr[5]={1,2,3,4,5};

    int j = 1;

    sampleFunction(arr,j,5);

    for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}