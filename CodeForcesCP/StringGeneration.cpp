#include<iostream>
using namespace std;

string solve(int n, int k){
    char arr[]={'c','b','a'};
    string ans;

    for(int i = 0;i<k;i++)
        ans+=(char)'a';
    
    for(int i =0;i<n;i++){
        ans+=(char)arr[i%3];
    }

    return ans;

}


int main(){

    int t=0;
    cin>>t;
    while(t){
        int n=0,k=0;
        cin>>n>>k;

        string ans = solve(n-k,k);

        cout<<ans<<endl;

        t--;
    }

    return 0;
}