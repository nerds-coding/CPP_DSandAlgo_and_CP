#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,5,5,5,5,7,8,9,11};

    vector<int> v(arr,arr+(sizeof(arr)/sizeof(arr[0]))); // putting value of array in vector 
    // first parameter = array itself and,
    //second parameter = array(variable)+ size of array

    int idx = upper_bound(v.begin(),v.end(),5)-v.begin();
    idx--; // because it return the very next index(mostly greater) near to that value

    cout<<idx<<endl;
    cout<<v[idx]<<endl;



    idx = upper_bound(v.begin(),v.end(),10)-v.begin();
    idx--;

    cout<<idx<<endl;
    cout<<v[idx]<<endl;


    return 0;
}