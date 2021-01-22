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

void updateSegmentTree(int seg[],int arr[],int node,int idx,int val,int l,int r){

    if(l==r){
        seg[node] = val;
    }else{
        int mid = (l+r)/2;

        if(mid<=idx){
            updateSegmentTree(seg,arr,node*2,idx,val,l,mid);
        }else{
            updateSegmentTree(seg,arr,node*2+1,idx,val,mid+1,r);
        }

        seg[node] = seg[node*2] + seg[node*2+1];
    }
}



int main(){

    int arr[] = {1,3,5,6,99,23};
    int seg[15];

    segmentTree(seg,arr,1,0,5);

    for(int x:seg){
        cout<<x<<" ";
    }
    cout<<endl;

    int idx = 2,val = 209;
    arr[idx] = val;

    updateSegmentTree(seg,arr,1,idx,val,0,5);
    for(int x:seg){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}