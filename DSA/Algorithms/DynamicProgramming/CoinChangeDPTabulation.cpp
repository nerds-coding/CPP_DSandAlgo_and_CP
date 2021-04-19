#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

/*
Total number of way to find the change from the given denomination/array coins

Approach:
    we will try to find the possible ways to make change till required change(in function)
    Initially we try to find with individual denominaiton and then we include other and so on.


*/

void coinChangeTotalWays(int arr[], int n, int change)
{
    vector<vector<int> > dp(n + 1, vector<int>(change + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= change; j++)
        {
            if (arr[i - 1] > j)// if the denomiation is less then the coin then simply copy from the above
            // reason to do is then including till the current denomination we can make that total amount of changes
            
            // like including 1 and 3 we can make upto dp[i][j] possible ways of change for coin j
                dp[i][j] = dp[i - 1][j - 1];
            else
            // but if the denomination is smaller than the current coin then
            {
                // first add the just above coin of the same column
                // and then
                // subtract the coin from deomination and after the subtraction the value we will get
                // will be the index value of the same row's column and then simply add the index value
                dp[i][j] = dp[i-1][j]+(dp[i][j-arr[i-1]]);
            }
        }
    }

    cout<<"Total Number of ways to change = "<<dp[n][change]<<endl;
}

int main()
{
    int arr[] ={1,3,5};
    // 3 = total number of denomination
    // 7 = the coin change we want
    coinChangeTotalWays(arr,3,7);
    return 0;
}