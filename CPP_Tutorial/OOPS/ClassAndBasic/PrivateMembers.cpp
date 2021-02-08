#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

/*
Class members marked as private can only be accessed by 
functions defined within the class. Any object or function 
defined outside the class cannot access such members directly. 
A private class member is only accessed by member and friend functions.
*/

class Phone{
    private:
        string name; // we cannot initialize the value inside this scope
    
    public:
    // getter and setter method must be public 
        void setName(string ne){ // setter method to set the name of phone
            name = ne;
        }

        string getName(){ // getter method to get the name of phone
            return name;
        }
};

int main()
{
    Phone ph;
    ph.setName("Samsung");

    cout<<"Name of Phone = "<<ph.getName()<<"\n";
    return 0;
}