#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>
#define n 3 // declaring the column globally

int subMatrixSum(int dp[][n + 1], int row1, int col1, int row2, int col2)
{
    return dp[row2][col2] - (dp[row2][col1 - 1] + dp[row1 - 1][col2]) + dp[row1 - 1][col1 - 1];
    /* 
    z 2 y1
    2 m 6 
    y2 6 x 

    from the last co-ordinate(X) of row2 and col2 we're subtracting the values

    the subtracting values are
    y1 = row1-1 and col2 // 
    y2 = row2 and col1-1
    and then we are add z 

    b'coz x the submation of the required value with some additional values 
    so from the first coordinates(m)to last cordinate(x)given we will subtract the y1 and y2 
    b'coz they are not been asked to be added
    and while subtracting the y's we have subtracted the z twice so are adding it once
    */
}

void matrixSum(int arr[][n], int col, int row1, int col1, int row2, int col2)
{
    int dp[col + 1][n + 1];   // making a array named dp with one additional row and Columns
    memset(dp, 0, sizeof dp); // initializing the 0 as initial values in the dp

    for (int i = 1; i <= n; i++)
    {
        dp[1][i] = (dp[1][i - 1] + arr[0][i - 1]);
        // adding values of the first row in dp
        // like 1 1 1 in original array
        // dp = 1 2 3
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i][1] = (dp[i - 1][1] + arr[i - 1][0]);
        // adding values of the first col in dp
        // like 1 1 1 in original array
        // dp = 1 2 3
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= col; j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + arr[i - 1][j - 1]) - dp[i - 1][j - 1];
            /*
            0 0 0 0
            0 z y 3
            0 y x 6 
            0 3 6 9

            x = currnet position of the dp
            y = diagonal value of dp
            z = diagonal value of x
            */
            // here we will first add the diagonal value of the dp array of i and j
            // then we will add the current value of the original array

            // then we are subtracting the diagonal value  currents position of dp's i and j
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << subMatrixSum(dp, row1, col1, row2, col2) << endl;
}

int main()
{
    int arr[][n] = {{1, 1, 1},
                    {1, 1, 1},
                    {1, 1, 1}};

    matrixSum(arr, 3, 2, 2, 3, 3);
    return 0;
}