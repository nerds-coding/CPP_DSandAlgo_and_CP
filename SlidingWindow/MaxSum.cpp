#include<iostream>
using namespace std;

int main(){
    int n,k=0;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    cout<<"Enter the window size"<<endl;
    cin>>k;

    cout<<"Enter the array elements"<<endl;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int max_window = 0;

    for(int i = 0;i<k;i++){
        max_window+=arr[i];
    }

    int window_sum = max_window;
    for(int i = k;i<n;i++){
        window_sum += arr[i]-arr[i-k];
        
        window_sum = max(window_sum,max_window);
    }

    cout<<window_sum<<endl;

    return 0;
}