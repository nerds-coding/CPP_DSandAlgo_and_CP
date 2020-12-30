// Composite Prime are those prime whose gcd of two numbers are 1

#include<iostream>
using namespace std;

int gcd(long int a,long int b){
    if(b==0)
        return a;
    
    return gcd(b,a%b);
}

int main(){

    long int a,b;
    cout<<"Enter A and B"<<endl;
    cin>>a>>b;
    cout<<((gcd(a,b)==1)? "YES":"NO")<<endl;

    return 0;
}