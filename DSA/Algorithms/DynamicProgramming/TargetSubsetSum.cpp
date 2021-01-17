#include<iostream>
using namespace std;

int main(){

    int n,s=0;
    cout<<"Enter the length of Array and Sum "<<endl;
    cin>>n>>s;

    int arr[n];
    cout<<"Enter the Array Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool dp[n+1][s+1];

    for(int i =0;i<=s;i++){
        dp[0][i] = false;
    }

    for(int i =0;i<=n;i++){
        dp[i][0] = true;
    }

    for(int i =1;i<=n;i++){
        for(int j = 1;j<=s;j++){
            if(j>=arr[i-1]){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    for(int i =0;i<=n;i++){
        for(int j = 0;j<=s;j++){
            cout<<dp[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<dp[n][s]<<endl;
    return 0;
}