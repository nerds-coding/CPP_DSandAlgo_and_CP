/*Rajiv and Nitish had a fight because Rajiv was annoying Nitish with his question.
Rajiv being a genius in arrays gave Nitish an array of natural numbers A of length N
with elements A1,  A2, . . ., AN. Nitish has to find the total amount of perfect pairs in the array.
A perfect pair (Ai, Aj) is a pair where (Ai + Aj) is a perfect square or a perfect cube and i ≠ j. 
Since Rajiv and Nitish are not talking with each other after the fight you have been given 
the question to solve and inturn make both of them a perfect pair again.
NOTE :-  A pair (Ai, Aj) and (Aj, Ai) are same and not to be counted twice.*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    long long t;
    cin>>t;
    
    while(t){
        long long n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }

        int counter =0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                float sq = sqrt(arr[i]+arr[j]);
                float cbt = cbrt(arr[i]+arr[j]);
                if((sq-floor(sq)==0)||(cbt-floor(cbt)==0)){
                    counter++;
                }
            }
        }

        cout<<counter<<endl;

        t--;
    }

    return 0;
}