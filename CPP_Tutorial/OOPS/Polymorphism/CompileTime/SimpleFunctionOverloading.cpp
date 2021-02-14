#include <iostream>
#include <vector>
using namespace std;


class Phone{

    // here we used same member function but with different signature/parameters
    // thus we can say its is compile time overloading
    public:
        void Model(string model){
            cout<<"Model = "<<model<<endl;
        }

        void Model(string model, int year){
            cout<<"Model = "<<model<<endl;
            cout<<"Year = "<<year<<endl;
        }
};


int main()
{
    Phone p;
    p.Model("Samsung");
    // when pass the parameter it call that exact member function 
    // which totaly depend on passing Number of signature

    

    return 0;
}