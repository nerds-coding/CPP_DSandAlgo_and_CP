#include<iostream>
using namespace std;

int main(){

    int n= 0;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int k=0;
    cin>>k;
    
    for(int i = 0;i<n;i++){
        if(arr[i]==k){
            cout<<i<<endl;
        }
    }

    return 0;
}