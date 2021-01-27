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
#include<cstring>
using namespace std; 


#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
#define ll long long
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair

ll mod = 1e5+1;


int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 

    bool primes[mod];
    memset(primes,true,mod);
    for(ll i =2;i<=mod;i++){
        if(primes[i]){
            for(ll j = i*i;j<=mod;j+=i){
                primes[j] = false;
            }
        }
    }

    ll results[mod];
    memset(results,0,mod);
    ll counter=0;

    for(int i=5;i<=mod;i++){
        if(primes[i] && primes[i-2]){
            counter++;
        }
        results[i]=counter;
    }

    int t; 
    cin >> t; 
    while (t--) { 
        int n; 
        cin >> n; 
        cout<<results[n]<<"\n";
    } 
    return 0;
}