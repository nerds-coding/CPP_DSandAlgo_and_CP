#include <iostream>
#include <vector>
using namespace std;

class Address{
    public:
        string city,state,street;

    Address(string city,string state,string street){
        this->city = city;
        this->state = state;
        this->state = street;
    }
};

class Personal{
    Address* add;

    string name;

    public:
        Personal(string name, Address *add){
            this->name = name;
            this->add = add;
        }

        void display(){
            cout<<"Name = "<<name<<endl;
            cout<<add->city<<" "<<add->state<<" "<<add->street<<endl;
        }
};


int main()
{
    Address add("Mumbai","Maharashtra","Linking Road");
    Personal p("Anup",&add);
    p.display();
    return 0;
}