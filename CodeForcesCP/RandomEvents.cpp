#include<iostream>
#include<iomanip>//for the digit after decimal in float
using namespace std;
#define ll long long
int main(){

    int t=0;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        int arr[n];
        for(int i =1;i<=n;i++){
            cin>>arr[i];
        }

        ll idx = n+1;
        ll num = n;
        for(int i = n;i>=1;i--){
            if(arr[i]==num){
                idx = i;
                num--;
            }else{
                break;
            }
        }

        idx--;
        double temp = 1;
        double ans = 0;
        while (m--)
        {
            ll range;
            double prob;
            cin>>range>>prob;

            if(idx<=range){
                ans+=temp*prob;
                temp = temp*(1-prob);
            }else
            {
                continue;
            }
            
        }

        if(idx == 0){
            ans = 1.0;
        }

        cout<<fixed<<setprecision(6)<<ans<<endl;
    }

    return 0;
}