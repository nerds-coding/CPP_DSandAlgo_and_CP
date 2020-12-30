#include<iostream>
using namespace std;

int main(){

    int n = 0;

    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<endl;
    n--;
    while(n>=0){
        cout<<arr[n]<<endl;
        n--;
    }

    return 0;
}