#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

//A copy constructor is a member function which initializes an object using another
//object of the same class.A copy constructor 
//has the following general function prototype :

//   ----   ClassName (const ClassName &old_obj); ---- 
class Phone
{

private:
    int price;

public:
    Phone(int pr)
    {
        price = pr;
    }
    Phone(Phone &p)
    {   // copy constructor
        // we generally pass the reference of same class object
            cout<<"Price of Phone in Copy Constructor = "<<p.price<<"\n";
        }
};

int main()
{
    Phone p(2000000);
    Phone p2(p);// accesing the copy constructor and passing the object
    return 0;
}