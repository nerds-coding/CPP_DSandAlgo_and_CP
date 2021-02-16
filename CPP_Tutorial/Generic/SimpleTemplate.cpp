#include <iostream>
#include <vector>
using namespace std;

template<typename T>
T minMax(T a, T b){
    return (a>b)?a:b;
}


int main()
{
    cout<<minMax(2,3)<<endl;
    cout << minMax(5.99, 3.99) << endl;
    return 0;
}