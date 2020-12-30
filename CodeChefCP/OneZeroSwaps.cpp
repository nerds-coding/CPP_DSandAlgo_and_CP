#include<iostream>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        char s[100000],p[100000];
        cin>>s>>p;

        int Scounter,pCounter=0;
        for(int i =0;s[i]!='\0';i++){
            if(s[i]=='0'){
                Scounter++;
            }
            if(p[i]=='0'){
                pCounter++;
            }
        }

        if(pCounter!=Scounter){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
        Scounter=pCounter=0;
    }


    return 0;
}