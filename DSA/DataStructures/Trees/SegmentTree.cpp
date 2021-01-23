#include<iostream>
using namespace std;

void segmentTree(int seg[],int arr[],int node,int l,int r){
    if(l==r){
        seg[node] = arr[l];
    }else{
        int mid = (l+r)/2;
        segmentTree(seg,arr,node*2,l,mid);
        segmentTree(seg,arr,node*2+1,mid+1,r);

        seg[node] = seg[node*2]+seg[node*2+1];
    }
}

// first storing the values of array in segment Tree array
// then adding the left node == node*2 with right node == node*2+1
// which is equivalent to tree node (left child and right )

// only the difference is we are storing the value in array int node idx form
// then adding the value as making the root 

int main(){

    int arr[]= {1, 3, 5, 7, 9, 11};
    int seg[15];

    segmentTree(seg,arr,1,0,5);

    for(int x:seg){
        cout<<x<<" ";
    }


    return 0;
}