#include<iostream>
using namespace std;

#define ll long long
#define fr(i,n) for(int i = 0;i<=n;i++)

int main(){

    ll a,b,c=  0;
    cin>>a>>b>>c;
    bool flag = false;
    int x;
    
    fr(x,c/a){
        if((c-x*a)%b==0){
            flag =true;
            break;
        }
    }

    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;

}