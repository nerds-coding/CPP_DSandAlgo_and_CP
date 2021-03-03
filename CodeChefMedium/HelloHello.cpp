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
vector<pair<double,int> > vi; 
pair<double, int> pi; 


int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    ll t = 0; 
    cin >> t; 
    while (t--) { 
        double d,u,n,ans = 0;
        cin>>d>>u>>n;

        double  vals = d*u;

        FOR(i,n){
            double m,r,c = 0;
            cin>>m>>r>>c;

            double best = (c/m) + (r*u);

            if(best<vals){
                ans = i+1;
                vals = best;
            }
        }

        cout<<ans<<"\n";

        
    } 
    return 0;
}