#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

// There are two type of constructor
// Defalult and Parameterized Constructor

// Constructor is invoke when object is created
class Phone
{
private:
    int price;
    int model_number;

public:
// Constructor must be Public 
// Constructor have no return type or return value
// Constructor Must have same name as Class
    Phone(int pr, int model_num)// Parameterized Construtor
    {
        price = pr;
        model_number = model_num;
    }
    void display()
    {
        cout << "Price of Phone = " << price;
        cout << "\nModel Number of Phone = " << model_number << "\n";
    }
};

int main()
{
    Phone ph(1000000, 12);
    // Constructor is generally use to initalized value 
    // but we still use getter and Setter method because 
    // constructor is initalize only once but not getter and setter
    ph.display();

    return 0;
}