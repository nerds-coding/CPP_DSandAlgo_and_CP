#include<iostream>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t)
    {
        char s[1000000];
        cin>>s;
        int counter=0;
        int zeros = 0;
        int ones = 0;
        for(int i =0;s[i]!='\0';i++){
            if(s[i]=='0'){
                zeros++;
            }
            if(s[i]=='1'){
                ones++;
            }
            counter++;
        }
        if((counter%2==0) && (zeros>0) && (ones>0)){
            if(zeros==ones){
                cout<<0<<endl;
            }else
            {
                counter=0;
                while (zeros!=ones)
                {
                    if(zeros>ones){
                        zeros--;
                        ones++;
                    }else
                    {
                        ones--;
                        zeros++;
                    }
                    counter++;
                }
                cout<<counter<<endl;
            }
            

        }else{
            cout<<-1<<endl;
        }

        t--;
    }
    

    return 0;
}