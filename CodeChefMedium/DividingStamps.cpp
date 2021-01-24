#include <iostream>
using namespace std;

#define ll long long

int main()
{

    ll n, total, m = 0;
    cin >> n;

    ll c[n];
    for (int i = 0; i < n; i++)
    {
        ll stamps = 0;
        cin>>stamps;
        total+=stamps;
    }

    m = (n * (n + 1)) / 2;

    cout << ((m <= total) ? "YES" : "NO") << endl;

    return 0;
}