#include<iostream>
using namespace std;

int main(){

    int n_items,capacity = 0;
    cout<<"Enter the N and Capacity"<<endl;
    cin>>n_items>>capacity;

    int vals[n_items],weights[n_items];
    
    cout<<"Enter the Items values"<<endl;
    for(int i =0;i<n_items;i++){
        cin>>vals[i];
    }

    cout<<"Enter the Items weights"<<endl;
    for(int i =0;i<n_items;i++){
        cin>>weights[i];
    }

    int dp[n_items+1][capacity+1];

    for(int i = 0;i<=n_items;i++){
        for(int j = 0;j<=capacity;j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if(j>=weights[i-1]){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-weights[i-1]]+vals[i-1]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout<<endl<<"Total Profit we can earn  =  "<<dp[n_items][capacity]<<endl;

    return 0;
}