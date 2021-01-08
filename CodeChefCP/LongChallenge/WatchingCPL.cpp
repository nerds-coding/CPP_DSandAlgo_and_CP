#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,total =0;
        cin>>n>>k;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total+=arr[i];
        }
        sort(arr,arr+n,greater<long long>());

        vector<long long> vect;
        if(total<2*k){
            cout<<-1<<endl;
        }else{
            long long arr1,j = 0;
            for(int i = 0 ;i<n;i++){
                if(arr1>k && j<i){
                    arr1-= arr[j];
                    vect.push_back(arr[j++]);
                }

                if(arr1 == k){
                    break;
                }

                if(arr1<k){
                    arr1+=arr[i];
                    vect.push_back(arr[i]);
                }
            }
        }
    }

    return 0;
}