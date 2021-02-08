#include <iostream>
#include <vector>
using namespace std;

#define ll long long
ll mod = 1e4 + 1;
vector<ll> vi(mod, true);
vector<ll> primes(mod, 0);

void factsPrime()
{
    for (ll i = 2; i <= mod; i++)
    {
        if (vi[i])
        {
            primes[i] = primes[i - 1] + 1;
            for (ll j = i * i; j <= mod; j += i)
            {
                vi[j] = false;
            }
        }
        else
        {
            primes[i] = primes[i - 1];
        }
    }

    vi.clear();
}

int main()
{
    ll t = 0;
    cin >> t;

    factsPrime();
    while (t--)
    {
        ll x, y = 0;
        cin >> x >> y;

        if (primes[x] <= y)
        {
            cout << "Chef\n";
        }
        else
        {
            cout << "Divyam\n";
        }
    }

    primes.clear();
    return 0;
}