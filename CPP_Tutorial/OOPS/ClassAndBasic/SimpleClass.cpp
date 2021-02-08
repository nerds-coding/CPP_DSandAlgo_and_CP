#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

class Phone{
    
    public:
        ll cost;
        ll model_num;
    
    private:
        string name;

};

int main()
{
    Phone ph;

    ph.cost = 12;
    ph.model_num = 134412345;
    
    //ph.name = "Samsung" we can't access the private memeber of class with object;
    // for that we can use getter setter or constructor method

    cout<<"Cost of Sell Phone = "<<ph.cost<<"\n";
    cout<<"Model Number of Phone = "<<ph.model_num<<"\n";

    return 0;
}