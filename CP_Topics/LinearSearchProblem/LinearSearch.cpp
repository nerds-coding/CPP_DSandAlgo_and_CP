#include<iostream>
using namespace std;

int main(){

    int n=0;
    int k=0;
    cin>>n;
    cin>>k;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<arr[k]<<endl;
    for(int i= 0;i<n;i++){
        if(k==arr[i]){
            cout<<"Index Position of K Value in Array\t"<<i<<endl;
        }
    }

    return 0;
}