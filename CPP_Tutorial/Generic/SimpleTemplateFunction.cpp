#include <iostream>
#include <vector>
using namespace std;


template<typename T>
void Swap(T &a, T &b){
    T temp = a;
    a =b;
    b = temp;
}


int main()
{
    int a=90,b = 500;
    Swap(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}