#include <iostream>
#include <vector>
using namespace std;

class Phone
{
private:
    int price;
    string name;
    static int sell;

public:
    Phone(int price, string name)
    {
        this->price = price;
        this->name = name;
        sell++; // sell value will incremet every time when constructor will be invoked
    }

    void display()
    {
        cout << "Name = " << name;
        cout << "\nPrice = " << price;
    }

    static int displayStatic()
    {
        return sell; // In static Function we cannot use THIS keyword
    }
};

int Phone::sell = 0;
int main()
{
    Phone p(300,"Samsung");
    Phone p2(3999,"Apple");
    Phone p3(000, "Samsung");
    Phone p4(399, "Apple");

    cout<<"Total Number Object Creation  "<<Phone::displayStatic()<<"\n";
    // we can access the Static Member Function/ Variable only using Scope Resolution(::)
    // Static is independent to object Creation
    return 0;
}