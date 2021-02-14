#include <iostream>
#include <vector>
using namespace std;

class A{
    public:
        virtual void draw()=0;
};

class B:public A
{
public:
    virtual void draw(){
        cout<<"Derived Class\n";
    }
};

int main()
{
    A* a;
    B b;
    a = &b;
    a->draw();


    b.draw();
    return 0;
}

/*

Abstract classes are the way to achieve abstraction in C++. 
Abstraction in C++ is the process to hide the internal details and 
showing functionality only. Abstraction can be achieved by two ways:

Abstract class
Interface
Abstract class and interface both can have abstract methods which are 
necessary for abstraction.

C++ Abstract class
In C++ class is made abstract by declaring at least one of its 
functions as <>strong>pure virtual function. A pure virtual function 
is specified by placing "= 0" in its declaration. Its implementation 
must be provided by derived classes.

*/