#include<iostream>
using namespace std;

int main(){
    int n = 0;

    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int temp = (sizeof(arr)/sizeof(arr[0]))-1;
    n--;
    while(n>0){
        arr[temp]+=arr[n-1];
        n--;
    }

    cout<<"Addition of Array Values are \t"<<arr[temp]<<endl;

    return 0;
}