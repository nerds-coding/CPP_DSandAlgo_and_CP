#include<iostream>
#include<vector>
using namespace std;

int main(){

    long long t=0;
    cin>>t;
    vector<long long> prime;

    while(t){
        long long start=0;
        long long end = 0;
        scanf("%lld",&start);
        scanf("%lld",&end);

        for(int i = start;i<=end;i++){
            bool flag = false;
            long long tempI=i;
            long long totalOfPrime=0;
            if(*max_element(prime.begin(),prime.end())>=i){
                continue;
            }else{
                for(int j=2;j<i;j++){
                    if(i%j==0){
                        flag = true;
                        break;
                    }
                }
                if(flag==false){
                    while(tempI){
                        totalOfPrime+=tempI%10;
                        tempI/=10;
                    }
                    if(*max_element(prime.begin(),prime.end())>=totalOfPrime){
                        continue;
                    }else{
                        for(int k = 2;k<totalOfPrime;k++){
                            if(totalOfPrime%k==0){
                                flag = true;
                                break;
                            }
                        }
                        if(flag==false){
                            prime.push_back(i);
                        }
                    }
                }
                flag = false;
            }
        }

        int counter =0;
        for(auto x:prime){
            if(x>=start || x<=end){
                counter++;
            }
        }

        cout<<counter<<endl;
        t--;
    }

    return 0;
}

/*A prime number is a positive number, which is divisible by exactly two different integers. 
A digit primeis a prime number whose sum of digits is also prime. 

For example the prime number 41 is a digit primebecause 4 + 1 = 5 and 5 is a prime number. 
17 is not a digit prime because 1 + 7 = 8, and 8 is not a prime number. 
In this problem your job is to  nd out the number of digit primes within a certainrange 
less than 1000000.*/