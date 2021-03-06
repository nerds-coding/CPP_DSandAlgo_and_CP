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
#include <numeric>
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
        ll a, b, c, d = 0;
        cin >> a >> b >> c >> d;

        vi.PB(a);
        vi.PB(b);
        vi.PB(c);
        vi.PB(d);

        vector<ll> subsets;
        bool flag = true;
        FOR(i, (1 << 4))
        {
            FOR(j, 4)
            {
                if (i & (1 << j))
                {
                    subsets.PB(vi[j]);
                }
            }
            if (accumulate(subsets.begin(), subsets.end(), 0) == 0)
            {
                flag = false;
                break;
            }
            else
            {
                subsets.clear();
            }
        }
        cout << ((flag) ? "No" : "Yes") << "\n";

        vi.clear();
    }
    return 0;
}