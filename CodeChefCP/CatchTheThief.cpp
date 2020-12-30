#include<iostream>
using namespace std;

int main(){
    long long test=0;
    cin>>test;
    while(test)
    {
        int arr[4];
        for(int i = 0;i<4;i++){
            cin>>arr[i];
        }

        if(abs(arr[0]-arr[1])%(2*arr[2])==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        
        test--;
    }
    return 0;
}