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

    friend int getStatic(Phone);
};

int Phone::sell = 0;
int getStatic(Phone x){
    return x.sell;
}

int main()
{

    Phone p(4999,"Apple");
    p.display();

    cout<<"\n";
    cout<<getStatic(p)<<"\n";
    return 0;
}