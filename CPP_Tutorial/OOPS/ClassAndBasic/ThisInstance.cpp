#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>


// "this" keyword is used to refer the current/class instantce

class Phone
{
private:
    int price;
    string name;

public:
    Phone(int pr, string nm)
    {
        this->price = pr;
        this->name = nm;
    }
    void display()
    {
        cout << "Price of Phone = " << price;
        cout << "\nName of Phone = " << name;
    }
};

int main()
{
    Phone p(100,"MI");
    p.display();
    Phone p1(900, "Samsung");
    p1.display();
    return 0;
}