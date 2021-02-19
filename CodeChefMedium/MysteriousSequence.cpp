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

ll mod = 1e9+7;
vector<ll> vi; 
pair<ll, ll> pi; 


int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    ll t = 0; 
    cin >> t; 
    while (t--) { 
        ll n=0; 
        cin >> n; 
        ll a[n]; 
        FOR(i, n) 
        cin >> a[i];

        bool flag = true;
        
        

        FOR(i,n-1){
            if(a[i]&a[i+1]!=a[i]){
                flag = false;
                cout<<0<<"\n";
                break;
            }
        }

        if(flag){
            ll counter = 0;
            ll result = 1;
            FOR(i,n-1){
                int m = a[i];
                while(m){
                    counter+=m&1;
                    m>>=1;
                }
            }

            FOR(i,counter){
                result = (result*2)%mod;
            }

            cout<<result<<"\n";
        }
    } 
    return 0;
}