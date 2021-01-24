#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{

    ll n, d = 0;
    cin >> n >> d;

    vector<ll> l;
    for (int i = 0; i < n; i++)
    {
        ll val = 0;
        cin >> val;
        l.push_back(val);
    }

    sort(l.begin(), l.end(), greater<int>());

    ll start = 1, pairs = 0;
    while (start < n)
    {
        if (l[start - 1] - l[start] <= d)
        {
            pairs++;
            start += 2;
        }
        else
        {
            start++;
        }
    }

    cout << pairs << endl;

    return 0;
}