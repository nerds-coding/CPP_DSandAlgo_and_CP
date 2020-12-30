#include<iostream>
using namespace std;

#define ll long long
#define fr(i,n) for(i = 0;i<n;i++)

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n,zeros,ones;
        int i;
        cin>>n;
        char s[n];
        char p[n];

        fr(i,n){
            cin>>s[i];
        }
        fr(i,n){
            cin>>p[i];
        }

        fr(i,n){
            if(s[i]!=p[i]){
                if(s[i]=='0'){
                    zeros+=1;
                }else{
                    ones+=1;
                }
            }
        }

        if(zeros!=ones){
            cout<<"No"<<endl;
            continue;
        }

        int c1=0;
        bool flag = true;
        fr(i,n){
            if(s[i]!=p[i]){
                if(s[i]=='0'){
                    if(c1>0){
                        c1--;
                    }else{
                        flag = false;
                        break;
                    }
                }else{
                    c1++;
                }
            }
        }

        cout<<((!flag)? "No":"Yes")<<endl;

    }

    return 0 ;
}