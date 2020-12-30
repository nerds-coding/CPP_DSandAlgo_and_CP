#include<iostream>
using namespace std;

int main(){

    int n=0;
    cin>>n;
    int arr[n];

    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
        cin>>arr[i];
    }

    for (int x : arr) 
        cout << x << endl; 


    return 0;

}