#include<iostream>
using namespace std;

int main(){
    long long t=0;
    cin>>t;

    while(t){
        long long n=0;
        cin>>n;
        long long p=1,a,c=0;
        while(n){
            cin>>a;
            p*=a;
            n--;
        }


        for(int i = 2;i<p;i++){
            if(p%i==0){
                c++;
            }
        }

        cout<<c<<endl;

        t--;
    }

    return 0;
}


/*Alice has learnt factorization recently. 
Bob doesn't think she has learnt it properly and hence he has decided to quiz her. 
Bob gives Alice a very large number and asks her to find out the number of factors of that number. 
To make it a little easier for her, he represents the number as a product of N numbers. 
Alice is frightened of big numbers and hence is asking you for help. Your task is simple. 
Given N numbers, you need to tell the number of distinct factors of the product of these N numbers.*/