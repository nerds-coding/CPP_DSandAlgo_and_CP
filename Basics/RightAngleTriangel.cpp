#include <iostream>
using namespace std;

int main()
{
    int space = 10;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = space; j >= 0; j--)
        {
            cout << ' ';
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
}