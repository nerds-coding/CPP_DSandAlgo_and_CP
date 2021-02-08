#include <iostream>
#include <vector>
using namespace std;

class B;

class A{
    int m;
    
    public:
        friend void showValues(A,B);
};

class B
{
    int n;

public:
    friend void showValues(A, B);
};


//int A::m = 99; we cannot define non static member variable outside the class

void showValues(A a,B b){ // defining Friend function
    a.m = 99;
    b.n = 000;
    cout<<"value of M = "<<a.m;
    cout<<"\nValue of N = "<<b.n<<"\n";
}

int main()
{
    A a;
    B b;

    showValues(a,b);
    return 0;
}