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
#include <iomanip>
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
        string t1, t2;
        float dist = 0.0;
        cin >> t1 >> t2 >> dist;

        float gf = stoi(t1.substr(0, 2) + t1.substr(3, 2));
        float bf = stoi(t2.substr(0, 2) + t2.substr(3, 2));

        float dif = (gf - bf) - 40;

        cout << fixed << setprecision(1) << (dist + dif) << " ";

        if (dist * 2 <= dif)
        {
            cout << setprecision(1) << dif << "\n";
        }
        else
        {
            cout << setprecision(1) << (dist +  (dif/ 2)) << "\n";
        }
    }
    return 0;
}