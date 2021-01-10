#include<iostream>
#include<math.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int num){

    int mid = floor((low+high-1)/2);

    while(arr[mid]!=num){
        if(arr[mid]==num){
            break;
        }else if(arr[mid]<num){
            low = mid-1;
        }else if(arr[mid]>num){
            high = mid+1;
        }
        mid = floor((low+high-1)/2);
    }

    return mid;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};

    cout<<binarySearch(arr,0,sizeof(arr)/sizeof(arr[0]),3)<<endl;

    return 0;
}



/*Binary search looks for a particular item by comparing 
the middle most item of the collection. If a match occurs, 
then the index of item is returned. If the middle item is 
greater than the item, then the item is searched in the sub-array 
to the left of the middle item. Otherwise, the item is searched 
for in the sub-array to the right of the middle item. 

This process continues on the sub-array as well until 
the size of the subarray reduces to zero.*/


//Array should be soreted for the binary search

