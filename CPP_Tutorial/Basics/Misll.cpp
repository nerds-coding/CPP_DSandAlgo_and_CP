#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

int main()
{
    int n = 10;
    int arr[] = {-5, -3, 8, -6, -7, 18, 10, -4, -3, 11};
    int dor = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            dor++;
        }
    }

    cout << dor << "\n"; // for c++
    return 0;
}