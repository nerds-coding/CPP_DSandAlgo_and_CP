#include<iostream>
using namespace std;

#define ll long long

ll fastExp(ll base, ll exp){
    ll res = 1;

    while(exp>0){
        if(exp&1){
            res*=base;
        }
        base*=base;
        exp>>=1;
    }

    return res;
}


int main(){

    ll base,exp;
    cout<<"Enter Base and Exponent"<<endl;
    cin>>base>>exp;

    cout<<(fastExp(base,exp))<<endl;


    return 0;
}