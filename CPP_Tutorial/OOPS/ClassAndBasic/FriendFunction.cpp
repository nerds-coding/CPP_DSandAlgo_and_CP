#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

// we use "friend" keyword to declare friend member function
// Friend Function is not a member of class it 
// but it can access the private and protected member/variable of class 


class Phone{
    private:
        int price;
    public:
        friend int getPrice(Phone);
        void setPrice(int pe){
            price = pe;
        }
};

int getPrice(Phone bx){
    return bx.price;
}


int main()
{
    Phone ph;
    ph.setPrice(3000);

    /*
    The function is not in the scope of the class to which it has been declared as a friend.

    It cannot be called using the object as it is not in the scope of that class.

    It can be invoked like a normal function without using the object.

    It cannot access the member names directly and has to use an object name and dot membership operator with the member name.
    
    It can be declared either in the private or the public part.
    */
    cout<<"Price of Phone = "<<getPrice(ph)<<"\n";
    return 0;
}