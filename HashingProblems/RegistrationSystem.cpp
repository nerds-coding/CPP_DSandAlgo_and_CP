#include<iostream>
#include<map>
using namespace std;

int main(){

    long long n=0;
    cin>>n;

    map<string,int> regCount;
    string names;

    while(n){
        
        cin>>names;

        if(regCount.count(names)==0){
            cout<<"OK"<<endl;
            regCount[names]++;
        }else{
            cout<<names<<regCount[names]<<endl;
            regCount[names]++;
        }

        n--;
    }

    return 0;
}