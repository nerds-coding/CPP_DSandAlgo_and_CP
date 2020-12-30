#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {4, 1, 8, 2, 9};

    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<len<<endl;

    for (int i = 0; i < len; i++)
    {
        cout << arr[i]<<endl;
    }

    return 0;
}