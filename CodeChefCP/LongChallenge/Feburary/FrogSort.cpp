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

ll mod = 1e6 + 1;
vector<ll> vi;
pair<ll, ll> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 0;
    cin >> t;
    while (t--)
    {

        unordered_map<ll, ll> wl;

        ll n, counter = 0;
        cin >> n;

        vector<ll> w(100, 0);
        vector<ll> l(n);

        FOR(i, n)
        {
            cin >> w[i];
        }

        FOR(i, n)
        {
            cin >> l[i];
            wl[w[i]] = l[i];
        }

        for (ll i = 2; i <= n; i++)
        {
            ll idx = find(w.begin(), w.end(), i) - w.begin();
            ll idx_prev = find(w.begin(), w.end(), i - 1) - w.begin();

            while (idx < idx_prev)
            {
                ll jump = ((((idx + wl[i]) - 1)!=0)?((idx + wl[i])):1);
                w.insert(w.begin() +jump, i);
                w[idx] = 0;
                idx = find(w.begin(), w.end(), i) - w.begin();
                counter++;
            }
        }

        // cout << endl;
        // cout << endl;

        // for (int i = 0; i < w.size(); i++)
        // {
        //     if (w[i] != 0)
        //         cout << w[i] << endl;
        // }

        // cout << endl;
        // cout << endl;

        cout<<counter<<"\n";
    }
    return 0;
}