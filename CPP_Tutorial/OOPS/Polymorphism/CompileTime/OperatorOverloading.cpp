#include <iostream>
#include <vector>
using namespace std;


class Phone{

    private:
        int price;
    
    public:
        Phone(int price){
            this->price = price;
        }

        void operator++ (){
            cout<<"Price + tax = "<<(price+400)<<endl;
        }

        void operator++(int) // pass an argument to make it different and post increment 
        {
            cout << "Price + tax = " << (price + 100) << endl;
        }
};


int main()
{

    Phone p(1000);
    
    ++p;
    p++;
    
    return 0;
}