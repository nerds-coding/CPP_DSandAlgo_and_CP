#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

// in shallow copy constructor 
// the copy constructor object and old object refer the same address/value 
// they don't allocate new memory to same member function/variable

class Phone{
    private:
        int price;
        string name;

    public:
        Phone(){
            name = "Default Samsung"; // assigining default value to member variable
        }

        void setValues(int pr,string na){
            name = na;
            price = pr;
        }

        void showData(){
            cout<<"Price of Phone = "<<price<<"\n";
            cout << "Name of Phone = " << name << "\n";
        }
};

int main()
{
    Phone p1; // making object of class 
    p1.setValues(2000000,"Apple");

    Phone p2 = p1; // making new object and assgining reference/value of old object
    
    p2.showData();

    return 0;
}