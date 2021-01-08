#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

// Problem = Remove Duplicate from the array and also print in same sequence
// [1,2,3,4,9,5,3,2,3,6,9,6] = [1,2,3,4,9,5,6]

vector<int> removeDuplicate(int arr[],int size){
    vector<int> output;
    unordered_map<int,bool> check_value;

    for(int i = 0;i<size;i++){
        if(check_value.count(arr[i])){
            continue;
        }
        check_value[arr[i]];
        output.push_back(arr[i]);
    }

    return output;
}

int main(){

    int arr[] = {1,2,3,4,9,5,3,2,3,6,9,6};

    vector<int> result = removeDuplicate(arr,sizeof(arr)/sizeof(arr[0]));

    for(int x:result){
        cout<<"  "<<x;
    }
    cout<<endl;


    return 0;
}