#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define ll long long int


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 0;
    cin >> t;
    while (t--)
    {
        ll c = 0;
        cin >> c;

        vector<ll> vi;
        while (c > 0)
        {

            vi.push_back(c % 2);
            c /= 2;
        }

        int j = vi.size();
        vector<ll> a(j, 1), b(j, 1);

        bool flag = true;
        int idx = 1;

        a[0] = 1;
        if (vi[vi.size()-1] == 1)
        {
            b[0] = 0;
        }

        vi.pop_back();

        while (vi.size())
        {
            int i = vi.back();
            vi.pop_back();

            if (i == 1)
            {
                a[idx] = 0;
            }
            else
            {
                a[idx] = 1;
            }
            idx++;
        }

        string aa, bb;
        for (int i = 0; i < j; i++)
        {
            aa.append(to_string(a[i]));
            bb.append(to_string(b[i]));
        }
        cout << (stoi(aa, 0, 2) * stoi(bb, 0, 2)) << "\n";
    }
    return 0;
}