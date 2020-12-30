#include<iostream>
using namespace std;

#define ll long long

int main(){

    ll n=0;
    cout<<"Enter limit for the Prime Number"<<endl;
    cin>>n;
    cout<<endl;

    int arr[n+1];
    for(int i = 0;i<=n;i++){
        arr[i]=true;
    }
    for(int i = 2;i<=n;i++){
        if(arr[i]){
            cout<<i<<endl;
            for(int j = i*i;j<=n;j+=i){
                arr[j]= false;
            }
        }
    }


    return 0;
}



/*Sieve of Eratosthenes is an algorithm for finding all 
the prime numbers in a segment [1;n] using O(nloglogn) operations.

The algorithm is very simple: at the beginning we write down all numbers between 2 and n
. We mark all proper multiples of 2 (since 2 is the smallest prime number) as composite. 
A proper multiple of a number x, is a number greater than x and divisible by x. 
Then we find the next number that hasn't been marked as composite, in this case it is 3. 
Which means 3 is prime, and we mark all proper multiples of 3 as composite. 
The next unmarked number is 5, which is the next prime number, and we mark all proper 
multiples of it. And we continue this procedure until we processed all numbers in the row.*/