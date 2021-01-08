#include<iostream>
using namespace std;

#define ll long long int
int main(){
    long long n=0;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        arr[i]=0;
    }

    long long q=0;
    cin>>q;
    while(q){
        long l=0;
        long r=0;
        cin>>l;
        cin>>r;

        for(int i = 0;i<n;i++){
            if(l<=i && i<=r){
                arr[i] = i-l+1;
                cout<<i-l+1<<endl;
                cout<<arr[i];
            }
        }
        cout<<endl;
        cout<<endl;
        q--;
    }
    long long m = 0;
    cin>>m;

    cout<<endl;
    cout<<endl;
    cout<<"Output"<<endl;
    while(m){
        int i =0;
        cin>>i;
        cout<<arr[i]<<endl;;
        m--;
    }

    return 0;
}


/*One of the teachers from CSE department did not agree for mass bunk during Pongal. 
After repeated requests from students, he told that he would accept for the bunk if 
everyone solves this question.
The question is as follows:
Given a number N, which is the size of array where indices are from 1 to N . 
Initially all the elements of array are 0 . Q queries are given . 
Each query contains two variables L and R . 
For each query you have to perform the following operation : 
for each index i where L<=i<=R you have to add a value of of (i-L+1) 
to the array element at index i . After performing Q queries, a number M is given. 
It is followed by M number of indices (I) where, for each index you have to output 
the value of element present in that index (I) of array. */