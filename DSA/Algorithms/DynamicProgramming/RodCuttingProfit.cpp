#include <iostream>
#include <utility>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

/*
This problem similar like knapsack problem
*/

void rodCutting(int rods[], int rodSize, int size)
{

    vector<vector<int> > dp(size + 1, vector<int>(rodSize + 1));

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= rodSize; j++)
        {
            if (i > j)
                dp[i][j] = dp[i - 1][j - 1];
            else
            {
                dp[i][j] = max(dp[i - 1][j - 1], dp[i][j - i] + rods[i - 1]);
            }
        }
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= rodSize; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl << dp[size][rodSize]<<endl;
}

int main()
{
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(price) / sizeof(price[0]);
    rodCutting(price, size, size);

    return 0;
}