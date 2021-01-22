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

int main(){

    int arr[]= {1, 3, 5, 7, 9, 11};
    int seg[15];

    segmentTree(seg,arr,1,0,5);

    for(int x:seg){
        cout<<x<<" ";
    }


    return 0;
}