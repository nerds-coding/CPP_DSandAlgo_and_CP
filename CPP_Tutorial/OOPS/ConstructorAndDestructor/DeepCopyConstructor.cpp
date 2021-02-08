#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

// Deep Copy Constructor Make their own memory heap 
// and store the value at their

class Phone{
    private:
        int price;
        string name;
    
    public:
        Phone(){
            price = 100;
            name = "Samsung";
        }

        Phone(int pr,string nm){
            price = pr;
            name = nm;
        }
        void display(){
            cout<<"Price of Phone = "<<price;
            cout<<"\nName of Phone = "<<name;
        }
};

int main()
{
    Phone p1;// object is initalized and memory is been allocated
    p1.display();// it will refer to non-parameterized contructor

    Phone p2(300,"Apple"); // it makes new memory 
    p2.display();// it doesn't refer the old memory

    return 0;
}