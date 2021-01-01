#include<iostream>
using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        char s[n];
        cin>>s;

        string output = "";

        for(int i =0;i<n;i+=4){
            int temp = 0;
            string decode_str = "abcdefghijklmnop";

            for(int j = 8;j>0;j/=2){
                if(s[i+temp]=='0'){
                    decode_str = decode_str.substr(0,j);
                }else{
                    decode_str = decode_str.substr(j,decode_str.length());
                }
                temp++;
            }
            output+=decode_str;
        }

        cout<<output<<endl;
    }

    return 0;
}