#include<iostream>
using namespace std;

int main(){

    int n=0;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int q=0;
    cin>>q;
    for(int i =0;i<q;i++){
        int start=0;
        int end = 0;
        cin>>start;
        cin>>end;
        long long total=0;
        for(int j=start;j<=end;j++){
            total+=arr[j];
        }
        cout<<total<<endl;

    }

    return 0;
}