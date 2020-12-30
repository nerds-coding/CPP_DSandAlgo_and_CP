#include<iostream>
using namespace std;

#define ll long long 

int main(){

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m,q,x,y,v=0;
        cin>>n>>m;
        int arr[n][m];

        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        cin>>q;
        while(q--){
            bool flag = false;
            cin>>x>>y>>v;
            x-=1;
            y-=1;
            arr[x][y]=v;
            int j;
            for(int i = x,j = y;   i>=0,j>=0;  i--){ 
                if(arr[i][j]!=v){
                    flag = true;
                    break;
                }
                j--;
            }
            for(int i = x,j = y;   i>n,j>m;  i++){ 
                if(arr[i][j]!=v){
                    flag = true;
                    break;
                }
                j++;
            }
            
            if(flag){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
    }
    

    return 0;
}