#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

#define ll long long

void simpleSieve(int limit,vector<int>& primes){

    bool arr[limit];
    memset(arr,true,limit);

    for(int i = 2;i<=limit;i++){
        if(arr[i]==true){
            primes.push_back(i);
            for(int j = i*i;j<=limit;j+=i){
                arr[j]=false;
            }
        }
    }
}


int main(){

    ll low= 0;
    ll high = 0;

    cout<<"Enter the low Number"<<endl;
    cin>>low;
    cout<<"Enter the High Number"<<endl;
    cin>>high;

    
    ll limit = floor(sqrt(high))+1;

    vector<int> primes;
    simpleSieve(limit,primes);

    bool range[high-low+2];
    memset(range,false,sizeof(range));

    for(int i = 0;i<primes.size();i++){
        int p = (low/primes[i])*primes[i];
        if(p<low){
            p+=primes[i];
        }

        for(int j = p;j<=high;j+=primes[i]){
            range[j-low]=true;
            
        }
    }

    for(int i = low;i<=high;i++){
        if(!range[i-low]){
            cout<<i<<endl;
        }
    }

    return 0;
}