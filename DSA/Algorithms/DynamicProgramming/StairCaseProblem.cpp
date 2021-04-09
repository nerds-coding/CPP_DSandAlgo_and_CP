#include <iostream>
#include <vector>
using namespace std;


#define ll long long
#define vec vector<ll>

/*
There are n stairs, a person standing at the bottom wants to reach the top. 
The person can climb 'n' staris at a time. 
Count the number of ways, the person can reach the top.
*/

void solve(int n,int total_stairs){

    int total_ways[total_stairs]; // making an array to store number of way we can climb on each stairs;

    total_ways[0] = 1;// at 0th stairs way will be 1 b'coz on current position there is only on way to climb;
    total_ways[1] = 1;// at 1th stairs there is only 1 chance to climb directly one step up 

    for(int i = 2;i<total_stairs;i++){// we starting loop from 2 b'coz we have already define for the preceeding 2 stairs case
        total_ways[i] = 0;// initializing the current stair 0 so no garbage value be calculated

        for(int j = 1;j<=n && j<=i;j++){ //j ==1 and j<=n -> because we can climb from 1 stairs once and upto n stairs
        // j<=i so the value doesn't go in negative for i-j;
            
            
            total_ways[i] += total_ways[i - j];
            // on current step there is only possiblity to climb is adding upto n preceeding step ways

        }
    }

    cout<<total_ways[total_stairs-1]<<endl;// printing the last stairs case value (possible ways to climb upto)
}

int main()
{
    int n,m =0;
    cout<<"Enter the total Stairs Available\n";
    cin>>m;
    cout << "Enter the total Stairs can Climb atmost at once\n";
    cin >> n;

    solve(n,m);

    return 0;
}