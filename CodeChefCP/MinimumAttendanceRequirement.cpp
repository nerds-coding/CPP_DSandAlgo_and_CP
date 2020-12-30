#include<iostream>
using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;
    while(t){
        ll n=0;
        cin>>n;
        char b[n+1];
        cin>>b;

        ll counter =0;
        for(int i = 0;i<n;i++){
            if(b[i]=='1'){
                counter++;
            }
        }

        counter+= 120-n;
        double percent = counter/120.0*100.0;

        if(percent>=75){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}