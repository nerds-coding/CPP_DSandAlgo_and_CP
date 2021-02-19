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
pair<ll, ll> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 0;
    cin >> t;
    while (t--)
    {
        ll n, temp = 0;
        vector<ll> vi;
        unordered_map<ll, ll> occur;
        cin >> n;

        FOR(i, n)
        {
            cin >> temp;
            vi.push_back(temp);
            occur[vi[i]]++;
        }

        sort(vi.begin(), vi.end());

        bool flag = true;

        if (occur[vi[n - 1]] > 1)
        {
            flag = false;
            //cout << vi[n - 1] << endl;
        }
        else
        {
            FOR(i, n)
            {
                if (occur[vi[i]] > 2)
                {
                    flag = false;
                    //cout << vi[i] << endl;
                    break;
                }
            }
        }

        vector<ll> leftArray;
        vector<ll> rightArray;
        if (flag)
        {
            cout << "YES\n";
            FOR(i, n)
            {
                if (occur[vi[i]] == 2 && occur.count(vi[i]) == 1)
                {
                    leftArray.push_back(vi[i]);
                    rightArray.insert(rightArray.begin() + 0, vi[i]);
                    occur.erase(vi[i]);
                }
                else if (occur[vi[i]] == 1)
                {
                    leftArray.push_back(vi[i]);
                }
            }

            FOR(i, leftArray.size())
            {
                cout << leftArray[i] << " ";
            }
            FOR(i, rightArray.size())
            {
                cout << rightArray[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "NO\n";
        }

        vi.clear();
        leftArray.clear();
        rightArray.clear();
        occur.clear();
    }
    return 0;
}