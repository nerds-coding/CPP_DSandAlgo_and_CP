#include<iostream>
using namespace std;

int main(){
    int large = 0;
    cin>>large;

    int n =0;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<large-arr[i]<<endl;
    }

    return 0;
}