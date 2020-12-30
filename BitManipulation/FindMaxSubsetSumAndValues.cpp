#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n=0;
    cin>>n;

    int counter=0;
    int arr[n];
    int temp = 0;
    vector<int> sum;
    vector<int> subSets;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<endl;

    for(int i=0;i<(1<<n);i++){
        for(int j =0;j<n;j++){
            if(i&(1<<j)){
                counter++;
                temp+=arr[j];
            }
        }
        sum.push_back(temp);
        subSets.push_back(counter);
        temp=0;
        counter=0;
    }

    cout<<endl;
    cout<<endl;
    cout<<*max_element(sum.begin(),sum.end())<<endl;//*max_element is used to find the max value in vector
    //*min_element is used to find the minimum value in vector
    cout<<endl;
    
    for(auto& i:sum){
        cout<<i<<endl;
    }

    return 0;
}