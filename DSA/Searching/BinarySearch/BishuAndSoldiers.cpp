#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){

    int n,q,p,m = 0;
    vector<int> sold;

    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>m;
        sold.push_back(m);
    }
    sort(sold.begin(),sold.end());
    cin>>q;

    for(int i = 0;i<q;i++){
        cin>>p;
        int idx = upper_bound(sold.begin(),sold.end(),p)-sold.begin();
        cout<<idx<<" "<<accumulate(sold.begin(),sold.end()+idx-n,0)<<endl;
        
    }

    return 0;
}




/*Bishu went to fight for Coding Club. 
There were N soldiers with various powers. 
There will be Q rounds to fight and in each round Bishu's power will be varied. 
With power M, Bishu can kill all the soldiers whose power is less than or equal to M(<=M). 
After each round, All the soldiers who are dead in previous round will reborn.
Such that in each round there will be N soldiers to fight. 
As Bishu is weak in mathematics, help him to count the number of soldiers 
that he can kill in each round and total sum of their powers.
1<=N<=10000
1<=power of each soldier<=100
1<=Q<=10000
1<=power of bishu<=100*/