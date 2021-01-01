#include<iostream>
#include<math.h>
using namespace std;

#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,d=0;
        cin>>n>>k>>d;

        ll total=0;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
            total+=arr[i];
        }

        ll contest = floor(total/k);
        cout<<min(contest,d)<<endl;
    }
    return 0;
}