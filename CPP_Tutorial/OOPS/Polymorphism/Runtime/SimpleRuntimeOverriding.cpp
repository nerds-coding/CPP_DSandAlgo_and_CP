#include <iostream>
#include <vector>
using namespace std;

class Phone
{
public:
    void calling()
    {
        cout << "Calling From Base Class" << endl;
    }
};

class Samsung:public Phone
{
public:
    void calling()
    {
        
        cout << "Calling From Derived Class" << endl;
    }
};

int main()
{
    Samsung sam;
    sam.calling();

    Phone *p;
    
    p = &sam;
    p->calling();

    return 0;
}