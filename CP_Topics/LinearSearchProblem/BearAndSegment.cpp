#include<iostream>
#include<string.h>
using namespace std;

int main(){

    long long t=0;
    cin>>t;
    while(t){
        char s[100000];
        cin>>s;

        bool flag = true;

        for(int j = 0;s[j]!='\0';j++){
            if(s[j]=='1' && flag ==true){
                flag = false;
            }
            else if(s[j]=='0' && flag == false && s[j+1]=='1'){
                flag = true;
                break;
            }
        }
        cout<<((flag==true)?"NO":"YES")<<endl;

        t--;
    }
    return 0;
}