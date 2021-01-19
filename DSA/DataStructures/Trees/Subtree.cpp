#include<iostream>
using namespace std;

struct  Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

struct Node* insert(Node* n,int val){
    if(n==NULL){
        return new Node(val);
    }else{
        if(n->data<val){
            n->right = insert(n->right,val);
        }
        else{
            n->left = insert(n->left,val);
        }
    }

    return n;
}

void subtree(Node*n){
    
}


int main(){

    return 0;
}