#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")


#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <list>
using namespace std; 


#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
#define ll long long int
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

ll mod = 1e6+1;
vector<ll> vi; 
pair<ll, ll> pi; 


int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    ll n,m = 0;
    cin>>n>>m;

    vector<ll> query;
    unordered_map<ll,ll> id_vals;

    multiset<ll,greater<ll> > vals;
    FOR(i,n){
        ll j;
        cin>>j;
        vals.insert(j);
    }

    FOR(i,m){
        cin>>query[i];
    }

    ll grt = *max_element(query.begin(),query.end());

    FOR(i,grt){
        ll v = floor(*(vals.begin())/2);
        if(v>0){
            vals.insert(v);
        }
        id_vals[i+1] = v;
    }

    FOR(i,n){
        cout<<id_vals[query[i]]<<"\n";
    }

    return 0;
}