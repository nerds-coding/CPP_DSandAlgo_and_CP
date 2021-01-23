#include<iostream>
using namespace std;

int main(){

    int t=0;
    cin>>t;

    while(t--){
        int n=0;
        cin>>n;

        int b[n];

        long long total = 0;
        for(int i =0;i<n;i++){
            cin>>b[i];
            total+=b[i];
        }

        if(total>=100){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}