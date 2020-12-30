#include<iostream>
using namespace std;

int main(){

    long long t=0;
    cin>>t;
    while(t){

        long long num =0;
        cin>>num;

        int arr[to_string(num).length()];
        int temp=0;
        bool flag = false;


        if((num%21==0)||(num==21)){
            cout<<"The streak is broken!"<<endl;
        }else{
            for(int i = sizeof(arr)/sizeof(arr[0])-1;i>=0;i--){
                arr[i]=num%10;
                num/=10;
            }
            temp = 0;
            for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
                if((arr[i]==1) && (temp == 2)){
                    flag = true;
                    break;
                }
                if(arr[i]==2){
                    temp =2;
                    
                }
            }

            if(flag){
                cout<<"The streak is broken!"<<endl;
            }else{
                cout<<"The streak lives still in our heart!"<<endl;
            }
        }
        t--;
    }

    return 0;
}