#include <iostream>
#include <vector>
using namespace std;

// When we have same member function/Variable in Base and Derived Class
// then there can be ambigiouty to compiler whom to make a call

// In C++ there is no "Super/Base" keyword
// so we use "Virtual" keyword to override the member function/s

// When we have same member function/Variable in Base and Derived Class
// to call the derived class we use sufix "Virtual" to member function of Base class

class A{

    public:
        void display(){
            cout<<"Base class invoked\n";
        }

        virtual void display2()
        {
            cout << "Base class invoked\n";
        }
};

class B:public A{

    public:
        void display(){
            cout<<"Derived Class is invoked\n";
        }

        void display2()
        {
            cout << "Derived Class invoked\n";
        }
};


int main()
{

    B b;
    b.display();

    A* a;
    a = &b;
    a->display();
    a->display2();
    return 0;
}