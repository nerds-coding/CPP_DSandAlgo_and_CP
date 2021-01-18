#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long

bool binarySearch(int arr[],int low, int high,int x){
    int mid = (low+high-1)/2;

    while (low<high)
    {
        if(arr[mid]==x){
            return true;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else if(arr[mid]>low){
            high = mid-1;
        }

        mid = (low+high)/2;
    }
    return false;
}

int main(){
    ll t=0;
    cin>>t;
    while(t--){
        ll n,q=0;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int counter=0;
        
        while(q--){
            ll x = 0;
            cin>>x;

            if(binary_search(arr,arr+n,x)){
                break;
            }else{
                counter=9;
            }
        }

        cout<<counter<<endl;
    }

    return 0;
}