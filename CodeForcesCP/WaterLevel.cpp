#include<iostream>
using namespace std;

#define ll long long

int main(){
    ll k,l,r,t,x,y=0;
    cin>>k>>l>>r>>t>>x>>y;
    bool flag = false;
    while(t--){
        if(k+y<=r){
            k+=y;
        }
        k-=x;
        if(k<l || k>r){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }

    return 0;
}