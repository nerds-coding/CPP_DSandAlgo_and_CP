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


// start = is staring range for the addition
// end = end till we want the addition

// l = starting range of the actual array
// r = end of the actual array
int getSum(int seg[],int start,int end,int l,int r,int node){
    if(start<=l && r<=end){// starting and ending of the range for the sum
    // must lies under the l and r of the array
        return seg[node];
    }
    if(end<l || r<start || l>r){// if the l of the array is greater then the end of the sum range
    // or vice-versa
    // then we total out from the range
        return 0;
    }
    int mid = (l+r)/2;
    return getSum(seg,start,end, l ,mid,node*2)+
    getSum(seg,start,end,mid+1,r,node*2+1);
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

    cout<<getSum(seg,3,4,0,5,1)<<endl;


    return 0;
}