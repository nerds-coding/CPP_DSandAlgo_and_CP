#include<iostream>
using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;
    while(t){
        ll n;
        cin>>n;

        int node[n];
        int value[n];

        for(int i = 0;i<n;i++){
            cin>>node[i];
            cin>>value[i];
        }

        for(int i = 0;i<n;i++){
            int val = value[i];
            for(int j = 0;j<n;j++){
                if(node[i]+node[j]==val && i!=j){
                    node[i]=0;
                    break;
                }
            }
        }

        int temp =0;
        for(int i = 0;i<n;i++){
            if(temp<node[i]){
                temp = node[i];
            }
        }

        cout<<temp<<endl;
        
        t--;
    }

    return 0;
}