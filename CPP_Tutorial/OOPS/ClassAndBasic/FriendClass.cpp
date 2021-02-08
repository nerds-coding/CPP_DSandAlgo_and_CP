#include <iostream>
#include <vector>
using namespace std;

class PhoneB;// only declaring class PhoneB

class PhoneA{
    private:
        int price;

    public:
        void setPrice(int pr){
            price = pr;
        }
    
    friend void getMinimum(PhoneA,PhoneB);// friend Function 
};

class PhoneB{// Defining Body of PhoneB
    private:
        int price;

    public:
        void setPrice(int pr)
        {
            price = pr;
        }

    friend void getMinimum(PhoneA, PhoneB);
};

void getMinimum(PhoneA a,PhoneB b){
    cout<<((a.price<b.price)?"Phone B is costly":"Phone A is costly")<<"\n";
}

int main()
{
    PhoneA a;
    PhoneB b;

    a.setPrice(200);
    b.setPrice(500);

    getMinimum(a,b);

    // to access the value of Class we must provide the object of class
    // friend function is capable of accessing the private as well as protected

    // friend function cannot be Public, Private or Protected
    return 0;
}