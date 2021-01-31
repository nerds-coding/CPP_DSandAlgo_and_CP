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
vector<ll> vi; 
pair<ll, ll> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
ll mod = 1e6+1;


int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    ll t = 0; 
    cin >> t; 
    while (t--) { 
        ll n,a,b,c,flr=0;
        cin>>n>>a>>b>>c;

        cin>>flr;
        n--;

        flr = abs(flr-b)+c+abs(flr-a);

        FOR(i,n){
            ll temp;
            cin>>temp;
            
            flr = min(flr,abs(temp-b)+c+abs(temp-a));
        }

        cout<<flr<<"\n";

    } 
    return 0;
}