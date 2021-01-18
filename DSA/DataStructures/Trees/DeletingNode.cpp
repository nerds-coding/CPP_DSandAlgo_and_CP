#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

struct Node* insert(Node* n,int value){
    
    if(n == NULL){
        return new Node(value);
    }else{
        if(n->data > value){
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
        cout<<n->data<<"  ";
        inorder(n->right);
    }
}

struct Node* rightMost(Node* n){
    Node* temp = n;

    while(temp->left){
        temp = temp->left;
    }

    return temp;
}


struct Node* deleteNode(Node* n,int value){
    if(n == NULL){
        return n;
    }

    if(n->data > value){
        n->left = deleteNode(n->left,value);
    }else if (n->data < value){
        n->right = deleteNode(n->right,value);
    }else{
        if(n->right == NULL){
            Node* temp = n->left;
            n = NULL;
            return temp;
        }else if(n->left == NULL){
            Node* temp = n->right;
            n = NULL;
            return temp;
        }

        Node* temp = rightMost(n->right);
        n->data = temp->data;

        n->right = deleteNode(n->right,temp->data);// we are just replacing the value 
        // so in the backtracking when we iterate toward the right side 
        // we can simply delete the value from there in same manner
    }
    return n;
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

    deleteNode(root,50);

    inorder(root);
    return 0;
}