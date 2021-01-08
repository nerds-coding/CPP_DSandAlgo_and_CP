/*You are given a string which comprises of lower case alphabets (a-z), upper case alphabets (A-Z), numbers, (0-9) and special characters like !,-.; etc.

You are supposed to find out which character occurs the maximum number of times and the number of its occurrence, in the given string. If two characters occur equal number of times, you have to output the character with the lower ASCII value.

For example, if your string was: aaaaAAAA, your output would be: A 4, because A has lower ASCII value than a.*/

#include<iostream>
#include<map>
using namespace std;

int main(){

    char strg[10000];
    cin.getline(strg,sizeof(strg));

    map<char,int> alpha;

    for(int i=0;strg[i]!='\0';i++){
        alpha[strg[i]]++;
    }

    long long temp=0;
    char cc;
    for(auto x:alpha){
        if(temp<x.second){
            temp = x.second;
            cc = x.first;
        }   
    }
    cout<<cc<<" "<<temp<<endl;
    return 0;
}