#include<iostream>
#include<vector>
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
    if(n == NULL){
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

struct Node* lca(Node* n,int n1,int n2){
    if(!n) return NULL;

    if(n->data == n1 || n->data == n2){
        return n;
    }

    Node* leftVal = lca(n->left,n1,n2);
    Node* rightVal = lca(n->right,n1,n2);

    if(leftVal && rightVal){
        return n;
    }

    // to check if left subtree or right subtree is LCA
    // n1= 20
    // n2 = 30 
    // lca(n1,n2) = n1 || n2 
    // if n1 is directly connected to n2 or vice-versa
    return (leftVal!=NULL)?leftVal:rightVal;
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

    cout<<lca(root,10,20)->data<<endl;

    //inorder(root);


    return 0;
}