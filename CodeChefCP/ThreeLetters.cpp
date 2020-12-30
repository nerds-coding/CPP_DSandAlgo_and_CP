#include<iostream>
#include<map>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        char s[100000];
        cin>>s;

        map<char,int> counter;
        int n=0;

        for(int i = 0;s[i]!='\0';i++){
            counter[s[i]]++;
            n++;
        }

        long int cc = 0;

        for(auto x:counter){
            if(x.second>1){
                for(int i = 0;i<x.second;i+=2){
                    if(n-3>0){
                        cc++;
                        n-=3;
                    }
                }
            }
        }

        cout<<cc<<endl;

    }

    return 0;
}