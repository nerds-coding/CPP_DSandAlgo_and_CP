#include <iostream>
using namespace std;

int main()
{
    int space = 10;

    for (int i = 0; i <= 10; i++)
    {
        for (int j = space; j >= 0; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << '*';
        }
        for (int l = 1; l <= i; l++)
        {
            cout << '*';
        }
        cout << endl;
        space--;
    }
    space =0;
    for (int i = 10; i >= 0; i--)
    {
        for (int j = space; j>=0; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= 0; k--)
        {
            cout << '*';
        }
        for (int l = i; l > 0; l--)
        {
            cout << '*';
        }
        space++;
        cout << endl;
    }

    return 0;
}