#include<iostream>
using namespace std;

int main(){

    char str[]= {'z','e','u','s'};

    for(int i =0;i<sizeof(str)/sizeof(str[0]);i++){
        for(int j =0;j<sizeof(str)/sizeof(str[0]);j++){
            for(int k =0;k<sizeof(str)/sizeof(str[0]);k++){
                for(int l =0;l<sizeof(str)/sizeof(str[0]);l++){
                    if(str[i]!=str[j]&&str[i]!=str[k]&&str[i]!=str[l]
                    && str[j]!=str[k] && str[j]!=str[l] && str[k]!=str[l]){
                    cout<<str[i]<<str[j]<<str[k]<<str[l]<<endl;
                }}
            }
        }
    }

    return 0;
}