#include <iostream>
#include <vector>
using namespace std;

#define ll long long

// Minimum number of denomination coin required to make changes

/*
with initial value of index(0) we will initialize 0 
b'coz we can't make 0 change with any possible of denomination coins

and rest logic is same as coinChangeDPTabulation 
but we will take the min of both the upper value and same row and col
*/

void coinChange(vector<int> arr, int n)
{
    int size = arr.size();

    vector<vector<int> > dp(size + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        if (arr[0] > i)
            dp[1][i] = dp[1][i - 1];
        else
        {
            dp[1][i] = 1 + dp[1][i - arr[0]];
        }
    }

    for (int i = 2; i <= size; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - arr[i - 1]]);
            }
        }
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Minimum Number of coin required to Make change = " << dp[size][n] << endl;
}

int main()
{
    vector<int> vec = {1, 3, 5};
    coinChange(vec, 7);
    return 0;
}