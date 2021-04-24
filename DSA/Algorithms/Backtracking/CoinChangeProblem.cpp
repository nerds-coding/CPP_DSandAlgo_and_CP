#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

/*
Problem is about that we are given some coin of any integer like 3,57,813,32...
and a number n = Integer 
and we have find out what is minimum number of coins we can use to obtain that n(as change)

like arr={1,3,5}
n = 7
1+1+5 = 7

we can also use any coin infinite to make change of n

simple recursion approach is we will try with each coin at starting to end just like tree traversal

In first step we'll approach only one coin till we find out minimum cons and if not then 
trace back to stack and try with another number 

*/

int coinChange(int arr[], int n, int ans)
{
    if (n == 0) // if initially n is 0 then return 0
        return 0;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        if (n - arr[i] >= 0) // we are sending the updated value of n
        // simply subtracting from the arrays element
        // but it should not go beyond 0
        {
            if (coinChange(arr, n - arr[i], ans) + 1 < ans) // +1 is b'coz we took one coin from the array
            {
                ans = coinChange(arr, n - arr[i], ans) + 1; // the current ans is less then the previous one then update the ans to lowest
            }
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 3, 5};

    // passing max value because we have to find the minimum value possible

    cout << (coinChange(arr, 7, INT_MAX)) << endl;
    return 0;
}