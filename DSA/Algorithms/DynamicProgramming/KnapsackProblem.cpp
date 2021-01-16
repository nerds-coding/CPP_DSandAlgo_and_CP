#include<iostream>
using namespace std;

int main(){

    int n_items,sack_capacity=0;
    cout<<"Enter the total number of items and sack Capacity  "<<endl;
    cin>>n_items>>sack_capacity;

    int values[n_items],weights[n_items];

    cout<<"Enter the values"<<endl;
    for(int i =0;i<n_items;i++){
        cin>>values[i];
    }

    cout<<"Enter the weights"<<endl;
    for(int i =0;i<n_items;i++){
        cin>>weights[i];
    }

    int dp[n_items+1][sack_capacity+1];

    for(int i = 0;i<=n_items;i++){
        for(int j = 0;j<=sack_capacity;j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if(weights[i-1]<=j){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-weights[i-1]]+values[i-1]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout<<endl<<"Total Profit  "<<dp[n_items][sack_capacity]<<endl;

    return 0;
}