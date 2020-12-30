#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    int sum = 0;
    cout << "Enter the Numbers"<<endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of given numbers are  "<<sum<<endl;

    return 0;
}




