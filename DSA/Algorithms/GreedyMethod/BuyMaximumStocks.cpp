#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#define ll long long
vector<pair<int, int> > vec;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

void solve(int stocks[], int value, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(make_pair(i + 1, stocks[i]));
    }

    sort(vec.begin(), vec.end(),compare);

    for (int i = 0; i < n; i++)
    {
        int p = min(vec[i].first, value / vec[i].second);

        total+= p;

        value-=p*vec[i].second;
    }

    cout<<total<<endl;
}

int main()
{
    int price[] = {10, 7, 19};
    int n = sizeof(price) / sizeof(price[0]);
    int k = 45;

    solve(price, k, n);

    return 0;
}

/*

Let say, we have R rs remaining till now, and the cost of product on this day be C, and we can buy atmost L products on this day then,
total purchase on this day (P) = min(L, R/C)
Now, add this value to the answer.
total purchase on this day (P) = min(L, R/C)
Now, add this value to the answer
total_purchase = total_purchase + P, where P =min(L, R/C)
Now, subtract the cost of buying P items from remaining money, R = R – P*C.
Total number of products that we can buy is equal to total_purchase.



*/