#include<iostream>
using namespace std;

int main(){

    long long n,m,u,q;
    cin>>n;
    cin>>m;
    cin>>u;
    cin>>q;

    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;i++){
            cin>>arr[i][j];
        }
    }

    

    return 0;
}





/*One day Debu, master of 2-dimensional data structures thought of challenging Himans, 
master of Trees and gave him a problem which is as follows:

This question is the easiest to understand, but no guarantee about the solution. 
Given a n x m 2d matrix, you have to perform u modifications of the form k,r1,c1,r2,c2. 
In each modification, you have to add k to all the cells in the block represented by (r1,c1) 
as upper left corner and (r2,c2) as the lower right corner. After making all the modifications 
you have to answer q queries of the form r1,c1,r2,c2. The answer of each query is the sum of 
values of all the cells in the block represented by (r1,c1) as upper left corner and (r2,c2) 
as the lower right corner.*/