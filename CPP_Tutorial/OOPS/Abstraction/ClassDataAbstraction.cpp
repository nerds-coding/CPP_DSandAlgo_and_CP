#include <iostream>
#include <vector>
using namespace std;

class A{
    private:// making the variable private so only the member function of class could access
        int x,y,z;

    public:
        void add(int x,int y){
            this->x = x;
            this->y = y;
            this->z = this->x+this->y;

            cout<<"Addition of Two numbers = "<<this->z<<endl;
        }
};


int main()
{

    A a;
    a.add(20,55);

    return 0;
}

/*

Abstraction using classes: 

An abstraction can be achieved using classes. A class is used to group all the data 
members and member functions into a single unit by using the access specifiers. 
A class has the responsibility to determine which data member is to be visible 
outside and which is not.

*/