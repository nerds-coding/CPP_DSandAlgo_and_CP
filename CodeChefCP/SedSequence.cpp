#include<iostream>
using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;
    while(t--){

        ll n,sum,k=0;
        cin>>n>>k;

        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        if(sum%k==0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }

    }

    return 0;
}