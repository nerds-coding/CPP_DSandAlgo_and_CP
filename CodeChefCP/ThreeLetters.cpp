#include<iostream>
#include<map>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char s[100000];
        int len=0;
        cin>>s;

        map<char,int> freq;
        for(int i = 0;s[i]!='\0';i++){
            freq[s[i]]++;
            len++;
        }
        int palin = 0;
        len/=3;
        for(auto x:freq){
            palin+= floor(x.second/2);
        }


        cout<<((len>palin)? palin:len)<<endl;
    }

    return 0;
}