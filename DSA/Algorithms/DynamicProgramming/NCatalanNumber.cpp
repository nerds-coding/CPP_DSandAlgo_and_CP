#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

void nCatalanNSquare(int n)
{
    // this also based on pascal triangle concept
    /*
    1 
    1 1 
    1 2 2 
    1 3 5 5 
    1 4 9 14 14 
    1 5 14 28 42 42
    */
    vector<vector<int> > dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Catalan Number of " << n << " = " << dp[n][n] << endl;
}

int main()
{
    nCatalanNSquare(5);
    return 0;
}