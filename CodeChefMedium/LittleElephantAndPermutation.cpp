#include <iostream>
using namespace std;

#define ll long long

int main()
{

    ll t = 0;
    cin >> t;

    while (t--)
    {
        ll n, local, global = 0;
        cin >> n;

        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1 && a[0] == 1)
        {
            cout << "YES" << endl;
        }
        else if (n == 1 && a[0] != 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i - 1] > a[i])
                {
                    local++;
                }
                for (int j = i - 1; j >= 0; j--)
                {
                    if (a[j] > a[i])
                    {
                        global++;
                    }
                }
            }
            cout << ((local == global) ? "YES" : "NO") << endl;

            global = 0;
            local = 0;
        }

        
    }
    return 0;
}
