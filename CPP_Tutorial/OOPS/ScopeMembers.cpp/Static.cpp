#include <iostream>
#include <vector>
using namespace std;

//When we declare a member of a class as static it means no matter 
//how many objects of the class are created, there is only one copy of the static member.


// when object is created new memory is assigned again and again

class Phone{
    private:
        int price;
        string name;
        static int sell;
    
    public:
        Phone(int price,string name){
            this->price = price;
            this->name = name;
            sell++;// sell value will incremet every time when constructor will be invoked
        }

        void display(){
            cout<<"Name = "<<name;
            cout<<"\nPrice = "<<price;
        }

        void displayStatic(){
            cout<<"\nTotal time memory is initalized  "<<sell<<"\n";
        }
};

int Phone::sell = 0;
int main()
{
    Phone p(100,"Samsung");
    p.display();

    Phone p2(100, "Samsung");
    p2.display();

    Phone p3(400,"Apple");
    p3.displayStatic();// it will display how many time new memory was allocated during 
    // object creation

    return 0;
}