#include<iostream>
using namespace std;

#define ll long long

ll modExponent(ll x, ll y, ll n){
    ll res =1;

    x%=n;
    while (y>0)
    {
    if(y&1){
        res=res*x%n;
    }

    x*=x%n;
    y>>=1;
    }

    return res;
}

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll x,y,n;
        cin>>x>>y>>n;

        cout<<(modExponent(x,y,n))<<endl;
    }

    return 0;
}