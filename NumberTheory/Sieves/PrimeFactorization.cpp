#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

#define ll long long
//#define vec vector<ll>
vector<ll> vec;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n = 0;
    cin >> n;

    ll m = ceil(sqrt(n) + 1);
    bool seive[m];
    memset(seive, true, m);

    for (ll i = 2; i <= m; i++)
    {
        if (seive[i])
        {
            for (ll j = i * i; j <= m; j += i)
            {
                seive[j] = false;
            }
        }
    }

    bool flag = true;
    ll fact = 0;
    pair<ll, ll> p;
    vector<pair<ll, ll> > facts;

    for (ll i = 2; i <= m; i++)
    {
        if (seive[i])
        {
            
            while (flag)
            {
                if (n % i == 0)
                {
                    
                    fact+=i;
                    n /= i;
                }
                else
                {
                    if(fact!=0){
                        vec.push_back(fact);
                    }
                    flag = false;
                    fact = 0;
                    break;
                }
            }
        }
        flag = true;
    }

    vec.push_back(n);
    for (auto x : vec)
    {
        cout << x << "\n";
    }

    return 0;
}