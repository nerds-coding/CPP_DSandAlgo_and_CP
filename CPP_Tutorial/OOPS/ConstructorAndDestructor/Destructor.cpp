#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

// destructor generally free up the memory will was allocated while making object
// A destructor is defined like constructor.
// It must have same name as class. But it is prefixed with a tilde sign (~).

//Note: C++ destructor cannot have parameters.
// Moreover, modifiers can't be applied on destructors.
class Phone
{
private:
    int price;
    string name;

public:
    Phone(int pr, string nm)
    {
        price = pr;
        name = nm;
    }

    ~Phone()
    { // it will always be call in the end
        // it will be invoked by compiler automatically
        cout << "\nDestructor is been invoked\n";
    }

    void display()
    {
        cout << "Price = " << price;
        cout << "\nName = " << name;
    }
};

int main()
{
    Phone p(100, "Apple");
    p.display();
    return 0;
}