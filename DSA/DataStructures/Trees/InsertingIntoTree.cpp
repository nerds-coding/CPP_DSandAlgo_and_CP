#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Node* insert(Node* n, int value){
    if(n==NULL){
        return new Node(value);
    }else{
        if(n->data>value){
            n->left = insert(n->left,value);
        }else{
            n->right = insert(n->right,value);
        }
    }
    return n;
}

void inorder(Node* n){
    if(n!= NULL){
        inorder(n->left);
        cout<<n->data<<" ";
        inorder(n->right);
    }
}



int main(){

    struct Node* root = new Node(50);

    insert(root,10);
    insert(root,20);
    insert(root,30);
    insert(root,40);
    insert(root,60);
    insert(root,70);
    insert(root,80);
    insert(root,90);

    inorder(root);
    
    return 0;
}