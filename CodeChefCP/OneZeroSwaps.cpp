#include<iostream>
using namespace std;

#define ll long long
//1100 = s
//0011 = p
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,i,ones,zeros=0;
        cin>>n;
        char s[n+1],p[n+1];        
        cin>>s;
        cin>>p;

        for(i = 0;i<n;i++){
            if(s[i]!=p[i]){
                if(s[i]=='0'){
                    zeros++;
                }else{
                    ones++;
                }
            }
        }

        if(zeros!=ones){
            cout<<"No"<<endl;
            continue;
        }
        int c=0;
        bool flag = true;

        for(i =0;i<n;i++){
            if(s[i]!=p[i]){
                if(s[i]=='0'){
                    if(c>0){
                        c--;
                    }else{
                        flag = false;
                        break;
                    }
                }else{
                    c++;
                }
            }
        }
        cout<<((flag)?"Yes":"No")<<endl;
    }
    return 0;
}