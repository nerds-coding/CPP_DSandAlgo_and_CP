#include <iostream>
#include <vector>
using namespace std;


#define ll long long
vector<ll> vec;

int main()
{
    for(ll i = 1;i<11;i++){
        vec.push_back(i);
    }

    vec.insert(vec.begin()+(5+2)-1,70);

    for(ll x:vec){
        cout<<x<<endl;
    }

    return 0;
}