#include<iostream>
using namespace std;

int gcd(int x,int y){
    if(y== 0){
        return x;
    }

    return gcd(y,x%y);
}

int main(){
    long int a,b;
    cout<<"Enter A and B"<<endl;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;

    return 0;
}