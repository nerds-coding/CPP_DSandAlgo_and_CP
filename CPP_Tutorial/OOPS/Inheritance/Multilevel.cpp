#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        std::cout << "Class A" << std::endl;
    }
};
class B
{
public:
    void display()
    {
        std::cout << "Class B" << std::endl;
    }
};
class C : public A, public B
{
    // void view()
    // {
    //     display();
    // }

    // this is will lead to ambiguity error
    // confused to which one should be called

public:         // if we decalre it private then class C cannot access it
    void view() //issue can be resolved by using the class resolution operator with the function
    {
        A ::display(); // Calling the display() function of class A.
        B ::display(); // Calling the display() function of class B.
    }
};
int main()
{
    C c;
    c.view();
    return 0;
}