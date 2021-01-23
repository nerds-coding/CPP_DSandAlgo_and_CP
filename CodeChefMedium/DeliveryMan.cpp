#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long

int main(){
    ll n,x,y,total = 0;
    cin>>n>>x>>y;

    vector<ll> andy;
    for(int i =0;i<n;i++){
        ll m = 0;
        cin>>m;
        andy.push_back(m);
    }

    for(int i =0;i<n;i++){
        ll m = 0;
        cin>>m;
        andy.push_back(m);
    }

    sort(andy.begin(),andy.end(),greater<ll>());
    for(int i = 0;i<n;i++){
        total+=andy[i];
    }

    cout<<total<<endl;
    return 0;

}