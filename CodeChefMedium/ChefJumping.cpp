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
    ll n = 0;
    cin >> n;
    unordered_map<ll, string> ans_map;

    if (ans_map.count(n))
    {
        cout << ans_map[n] << "\n";
    }
    else
    {
        if (n % 6 == 0 || n % 6 == 1 || n % 6 == 3)
        {
            cout << "yes\n";
            ans_map[n] = "yes";
        }
        else
        {
            cout << "no\n";
            ans_map[n] = "no";
        }
    }

    return 0;
}