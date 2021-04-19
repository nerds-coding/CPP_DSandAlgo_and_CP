#include <iostream>
#include <vector>
using namespace std;


#define ll long long



void longestIncreasingSubsequence(int arr[],int n){
    vector<int> lis;// making a temprary array for stroing the array values
    lis.push_back(arr[0]);// simply adding the first value of the array

    for(int i = 1;i<n;i++){
        if(arr[i]>lis.back()){// if the current value of original array is greater then lis last value 
        // then push back into the lis vector
        // b'coz we are looking for the longest subsequence
            lis.push_back(arr[i]);
        }else{

            // if the value is not greater then 
            // find the just greater value in lis (index = idx)
            int idx = lower_bound(lis.begin(),lis.end(),arr[i]) - lis.begin();

            // replace the index value with the current value
            lis[idx] = arr[i];

            // ** reason to replace the current value with index is are only intend to find the length of 
            // LIS not which are the actual values
            // so while replaceing the current value of the idx we will manage the length of the lis 

            // and also if the any greater value is already is added into the lis we will able to replace with smaller one
            // so further we can add more greater value

            /*
            ex => lis->[4,7,9]
                cur_value = 5

                so if condition will not be satisfied
                so in else
                // lis -> [4 5 9] 
                so in case of future when a new smaller value found like seven then we can add to it
            */
        }
    }
    cout<<lis.size()<<endl;// this array only intented to find the size of LIS not the actual values
}

int main()
{
    int arr[] = { 2, 5, 3, 7, 11, 8, 10, 13, 6 };// original array 

    longestIncreasingSubsequence(arr,sizeof(arr)/sizeof(arr[0]));
    
    return 0;
}