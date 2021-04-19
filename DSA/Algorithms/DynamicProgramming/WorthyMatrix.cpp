#include <iostream>
#include <vector>
using namespace std;

#define ll long long
vector<vector<int> > a(10, vector<int>(10));

int getSum(int y1, int x1, int d)
{
    if (d == 0)
    {
        return 0;
    }

    int y2 = d + y1 - 1, x2 = d + x1 - 1;

    return a[y2][x2] - a[y2][x1 - 1] - a[y1 - 1][x2] + a[y1 - 1][x1 - 1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n, m, k;
        cin >> n >> m >> k;

        a.clear();

        for (int i = 1; i <= n; i++)
        {
            int mm =0;
            for (int j = 1; j <= m; j++)
            {
                cin>>a[i][j];
            }
            
        }

        
        //prefix SUM array;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                a[i][j] += a[i][j - 1] + a[i - 1][j] + a[i - 1][j - 1];
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int mx_pos = min(n - i + 1, m - j + 1);
                int l = 0, r = mx_pos, mid;
                while (l < r)
                {
                    
                    mid = (l + r + 1) / 2;

                    if (k > getSum(i,j, mid) / (mid * mid))
                    {
                        l = mid;
                    }
                    else
                    {
                        r = mid - 1;
                    }
                }
                ans += mx_pos - l;
            }
        }
        cout << ans << endl;
    }
    return 0;
}