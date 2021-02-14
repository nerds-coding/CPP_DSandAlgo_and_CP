#include <iostream>
#include <vector>
using namespace std;

class Phone
{

private:
    int price;

public:
    Phone(int price)
    {
        this->price = price;
    }

    void operator+(Phone);
    void display();
};

void Phone::operator+(Phone a)
{
    price += a.price;
    cout << "Phone1+ Phone1 Price = " << price;
}

int main()
{

    Phone p(1000);
    Phone p2(10000);

    p+p2;

    return 0;
}