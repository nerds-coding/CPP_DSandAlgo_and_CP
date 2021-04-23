#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

/*
Pascal Triangle is used to find the Combination

Pascal Triangle start with row and column = 0;

so for nCr = dp[n][r]

This program totally lie on the pascal triange 

and row and col length will always be equal

because r cannot be greater then n 

b'coz we cannot choose more r than n if practically impossible
*/
void binomialCoefficient(int n, int r)
{
    if(r>n) return;
    vector<vector<int> > dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
        }
    }


    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<n<<" C "<<r<<" = "<<dp[n][r]<<endl;
}

int main()
{
    binomialCoefficient(6,4);
    return 0;
}