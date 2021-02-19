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

struct Node* insert(Node* n,int val){
    if(!n){
        return new Node(val);
    }else{
        if(n->data<val){
            n->right = insert(n->right,val);
        }else{
            n->left = insert(n->left,val);
        }
    }

    return n;
}

void inorder(Node* n){
    if(n){
        inorder(n->left);
        cout<<n->data<<" ";
        inorder(n->right);
    }
}

struct Node* mirrorTree(Node* n){
    if(!n){
        return NULL;
    }

    Node* temp = n->left; // simply swapping the right node with left node
    n->left = n->right; // at initial state we swapped the very first node of right and left
    n->right = temp; // then followed by each and every node of their respective nodes;

    if(n->left){ // so  we don't meet any non proceeding left node
        mirrorTree(n->left); 
    }
    if(n->right){
        mirrorTree(n->right);
    }

    return n; // if we encountered end of tree simply return to the caller in recursive call
    // else return the root of the Node 
    // at the end of recursion call the pointer will be pointing to root node;
}

int main(){

    struct Node* root = new Node(50);

    insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);
    insert(root, 60);
    insert(root, 70);
    insert(root, 80);
    insert(root, 90);

    inorder(root);

    mirrorTree(root);

    cout<<endl;
    inorder(root);

    return 0;
}