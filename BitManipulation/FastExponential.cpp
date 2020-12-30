#include<iostream>
using namespace std;

int exponent(int base, int exp){
    int res = 1;

    while(exp>0){
        if(exp &1){// to escape even bits
            res*=base;
        }
        base*=base;
        exp>>=1;// we are simply dividing exponent by in each steps until our exponent becomes 1
    }

    return res;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<exponent(a,b)<<endl;
    return 0;
}