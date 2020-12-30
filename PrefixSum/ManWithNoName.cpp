#include<iostream>
using namespace std;

int main(){

    long long t=0;
    cin>>t;

    while(t){
        long long n=0;
        cin>>n;

        int arr[n];
        long long total = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=-1){
                total+=arr[i];
            }else{
                arr[i] = (total/i);
                total+=arr[i];
            }
        }

        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
        t--;
    }

    return 0;
}





















/*Blondie is a bounty hunter. Today, he is on a mission to shoot criminals in a particular city. A city is divided into N areas, numbered 1 through N. It is known that an area numbered i contains Ai

criminals. But the problem here is that for some areas, the number of criminals is unknown. Blondie needs to know the number of criminals in each area in advance, as he is very good with the gun, so he only needs a single bullet for one criminal, that’s why he needs to know the count. He doesn’t like to carry more bullets with him.

The areas are arranged linearly in order. And the good part is that for each area with unknown criminals, the number of criminals can be calculated by following these simple steps:

Step 1: Count the criminals shot before
Step 2: Count the areas visited before
Step 3: Divide criminals found in Step 1 by areas found in Step 2
Step 4: Round it down to the nearest integer
Step 5: That’s it

Calculate the number of bullets Blondie needs for each area.*/
