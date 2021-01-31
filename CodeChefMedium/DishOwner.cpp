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
ll mod = 1e6 + 1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 0;
    cin >> t;
    while (t--)
    {
        unordered_map<ll, ll> owner;
        ll n, q = 0;
        cin >> n;
        ll score[n];
        FOR(i, n)
        {
            cin >> score[i];
            owner[i+1] = i+1;
        }

        cin >> q;

        while (q--)
        {
            ll x, y, temp = 0;
            cin >> temp;
            if (temp == 0)
            {
                cin>>x>>y;
                if (score[x - 1] > score[y - 1] && owner[x] != owner[y])
                {
                    owner[y] = x;
                }
                else if (score[x - 1] < score[y - 1] && owner[x] != owner[y])
                {
                    owner[x] = y;
                }
                else if (owner[x] == owner[y])
                {
                    cout << "Invalid query!\n";
                }
            }else if (temp == 1)
            {
                cin >>x;
                cout << owner[x] << "\n";
            }
            

            
        }
    }
    return 0;
}