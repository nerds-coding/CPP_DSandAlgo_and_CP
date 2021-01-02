#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

#define ll long long

void swap(vector<int>& john, int john_idx, vector<int>& jack, int jack_idx){
    int temp = john[john_idx];
    john[john_idx] = jack[jack_idx];
    jack[jack_idx] = temp;
}

int main(){

    ll t;
    cin>>t;
    while(t--){
        int n,m=0;
        int counter =0;
        cin>>n>>m;
        vector<int> john;
        vector<int> jack;

        int temp =0;
        for(int i =0;i<n;i++){
            cin>>temp;
            john.push_back(temp);
        }
        sort(john.begin(),john.end());

        for(int i = 0;i<m;i++){
            cin>>temp;
            jack.push_back(temp);
        }
        sort(jack.begin(),jack.end());

        if(accumulate(john.begin(),john.end(),0) > accumulate(jack.begin(),jack.end(),0)){
            cout<<0<<endl;
        }else{
            
            for(int i =0;i<john.size();i++){
                counter++;
                m-=1;
                swap(john,i,jack,m);
                if(accumulate(john.begin(),john.end(),0) > accumulate(jack.begin(),jack.end(),0)){
                    break;
                }
            }

        if(accumulate(john.begin(),john.end(),0) > accumulate(jack.begin(),jack.end(),0)){
            cout<<counter<<endl;
        }else{
            cout<<-1<<endl;
        }
        }
    }

    return 0;
}