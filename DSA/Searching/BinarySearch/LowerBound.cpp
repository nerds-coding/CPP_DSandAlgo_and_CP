#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,4,4,4,6,7,8,9};

    vector<int> v(arr,arr+(sizeof(arr)/sizeof(arr[0])));

    int idx = lower_bound(v.begin(),v.end(),4)-v.begin();

    cout<<idx<<endl;
    cout<<v[idx]<<endl;

    idx = lower_bound(v.begin(),v.end(),5)-v.begin();
    // if value is not present in array then it return the very next value index

    cout<<idx<<endl;
    cout<<v[idx]<<endl;

    return 0;
}