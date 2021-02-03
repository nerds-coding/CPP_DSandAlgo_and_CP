#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

bool isPower(ll n){
    // if n == 8  then binary form will be = 1000
    // it mean in binary format(only single &) 
    // if we do AND operation between 8 and n-1(7 = 0111)
    // it will gives 0 
    // and n && !(0) = (1 && 1) = 1;
    return n && (!(n&n-1));
}

int main()
{

    cout<<((isPower(31))?"True":"False")<<"\n";

    return 0;
}