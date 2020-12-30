#include<iostream>
using namespace std;

int equilibrium(int arr[],int n){
    int sumOfArray=0;
    for(int i=0;i<n;i++){
        sumOfArray+=arr[i];
    }

    int leftArraySum=0;
    for(int i =0;i<n;i++){
        sumOfArray-=arr[i];

        if(sumOfArray==leftArraySum){
            return i;
        }
        leftArraySum+=arr[i];
    }

    return -1;
}

int main(){

    int n=0;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<equilibrium(arr,n)<<endl;



    return 0;
}


/*Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. For example, in an array A:

Example:

    Input: A[] = {-7, 1, 5, 2, -4, 3, 0}
    Output: 3
    3 is an equilibrium index, because:
    A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

    Input: A[] = {1, 2, 3}
    Output: -1
*/