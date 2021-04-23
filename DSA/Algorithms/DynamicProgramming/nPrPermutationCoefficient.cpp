#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

/*
1 
2 2 
3 6 6 
4 12 24 24 
5 20 60 120 120 
6 30 120 360 720 720 
7 42 210 840 2520 5040 5040 
8 56 336 1680 6720 20160 40320 40320 
9 72 504 3024 15120 60480 181440 362880 362880 
10 90 720 5040 30240 151200 604800 1814400 3628800 3628800

here also this is partially based on Pascal's Triangel 

but each 
-> new row is product of previous columns values;
*/

void permutation(int n, int r)
{
    vector<vector<int> > dp(n + 1, vector<int>(n + 1, 1));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = i * dp[i - 1][j - 1];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<n<<" P "<<r<<" = "<<dp[n][r]<<endl;
}

int main()
{
    permutation(10,2);
    return 0;
}