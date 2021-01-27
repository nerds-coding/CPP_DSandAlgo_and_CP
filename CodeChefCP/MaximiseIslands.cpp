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
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
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
        ll n, m = 0;
        cin >> n >> m;
        char a[n][m];
        FOR(i, n)
        {
            FOR(j, m)
            {
                cin >> a[i][j];
            }
        }

        ll total = n * m;
        ll even, odd = 0;

        FOR(i, n)
        {
            FOR(j, m)
            {
                if (!((i + j) & 1) && a[i][j] == '.')
                {
                    even++;
                }
                if (((i + j) & 1) && a[i][j] == '*')
                {
                    even++;
                }
            }
        }

        FOR(i, n)
        {
            FOR(j, m)
            {
                if (!((i + j) & 1) && a[i][j] == '*')
                {
                    odd++;
                }
                if (((i + j) & 1) && a[i][j] == '.')
                {
                    odd++;
                }
            }
        }

        if (!(total & 1))
        {
            cout << min(even, odd) << "\n";
        }
        else
        {
            cout << even << "\n";
        }
    }
    return 0;
}