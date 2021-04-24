#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

/*
Problem 
String s = abccbc
What is the minimum way to cut and make substrings out of super set string 
that all the subsets are palindrome

Like 
a
bccb
c
*/

// this approach is in O(n^3) n^2 is in another file --> ppwmc
void ppwmc(string s)
{
    int n = s.length();

    // each row and col denote single character of string
    // thus the row and col are equal length of string given

    // but whenever we consider the row i to col j then it means that we are
    // considering all the character that comes between i to j

    vector<vector<bool> > pal(n, vector<bool>(n, 0)); //supporint Vector
    // Initially to store that at cut is it possible to make it substring or not, if then 1 else 0
    vector<vector<int> > dp(n, vector<int>(n, 0)); // Actual DP array to store cut in the string

    for (int gap = 0; gap < n; gap++)
    {
        for (int i = 0, j = gap; j < n; i++, j++) // j = gap and end till n-1
        // b'coz we are simply checking for the upper triangle in the 2D vector of pal
        {
            if (gap == 0) // every single character is palindrome
                pal[i][j] = 1;
            else if (gap == 1) // if both character is same then its palindrome or else not
                pal[i][j] = s[i] == s[j];
            else
            {
                if (s[i] == s[j] && pal[i + 1][j - 1] == 1) // simply checking that extreme character(starting and ending) and
                                                            // in between character are same or not
                                                            // the beneath diagonal of the pal vector determine the in between characters combinations

                    // if they are equal enough to make palindrome then 1 else 0
                    pal[i][j] = 1;
                else
                    pal[i][j] = 0;
            }
        }
    }

    for (int gap = 0; gap < n; gap++)
    {
        for (int i = 0, j = gap; j < n; i++, j++)
        {
            if (gap == 0)
                dp[i][j] = 0;
            else if (gap == 1)
                dp[i][j] = pal[i][j]; // if the pal is true then dp =1 else 0
            else
            {
                if (pal[i][j]) // if the pal is true the(which means it's already a palindrome) then
                               // no minimum cuts required
                    dp[i][j] = 0;
                else // but not palindrome in pal then
                {
                    int min = INT_MAX;

                    for (int k = i; k < j; k++) // we start a loop to seprate the string in multiple
                    // combination like seprate the string in 2 part
                    // one part be like a
                    // other
                    // bccbc
                    // then again one part is ab and other is ccbc and so till abccb and c
                    {
                        int left = dp[i][k]; // again checking the value of "a" in dp is that substring is
                        // palindrome and its value to make it palindrome
                        int right = dp[k + 1][j];

                        if (left + right + 1 < min) // total passible cuts and +1 b'coz we are dividing the
                                                    // current string into two and and check with already substring vaulue
                            min = left + right + 1;
                    }

                    dp[i][j] = min; // storing the minimum value to subtring palindrome
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Minimum Cuts Required to Make Whole String Palindrome =  " << dp[0][n - 1] << endl;
}
int main()
{
    //ppwmc("abccbc");
    ppwmc("abababa");
    return 0;
}