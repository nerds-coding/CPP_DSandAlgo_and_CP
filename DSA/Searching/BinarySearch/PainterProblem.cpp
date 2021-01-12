#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

#define ll long long

int main(){

    ll a,b,n,j= 0;
    cin>>a>>b>>n;

    vector<ll> vec;
    for(int i = 0;i<n;i++){
        cin>>j;
        vec.push_back(j);
    }

    
    return 0;
}


/*Given 2 integers A and B and an array of integars C of size N.

Element C[i] represents length of ith board.

You have to paint all N boards [C0, C1, C2, C3 … CN-1]. 
There are A painters available and each of them takes B units of time to paint 1 unit of board.

Calculate and return minimum time required to paint all 
boards under the constraints that any painter will only 
paint contiguous sections of board.*/