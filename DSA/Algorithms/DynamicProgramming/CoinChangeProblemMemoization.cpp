#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

// for explaination reffer the backtracking coinchange problem 
// we simply added dp array for all the possible coin change problem from 0 to n
// so we don't have to compute for same possible n

int coinChange(int arr[],int n,int dp[],int ans){
    if(n == 0) return 0;

    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(n-arr[i]>=0){
            int subAns = 0;
            if(dp[n-arr[i]]!=-1){
                subAns = dp[n-arr[i]];
            }else{
                subAns = coinChange(arr,n-arr[i],dp,ans);
            }

            if(subAns+1<ans && subAns!=INT_MAX){
                ans = subAns+1;
            }
        }
    }

    return dp[n]= ans;
}

int main()
{
    int arr[]= {1,3,7};
    int n = 7;
    int dp[n+1];
    memset(dp,-1,n+1);
    dp[0] = 0;


    cout<<(coinChange(arr,n,dp,INT_MAX))<<endl;
    return 0;
}