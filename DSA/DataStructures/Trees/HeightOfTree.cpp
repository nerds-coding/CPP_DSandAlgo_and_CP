#include<iostream>
using namespace  std;

struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int vals){
        this->data = vals;
        this->left = NULL;
        this->right = NULL;
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

// int height(Node* n){
//     if(!n){
//         return 0;
//     }

//     return 1+(max(height(n->left),height(n->right)));
// }


// simplified Version
int height(Node* n,int h){
    if(!n){
        //if we found null node  
        // then simply add zero to height;
        return 0;
    }

    // we will traverse through all the node 
    // just like inorder traversal


    int left = height(n->left,h); 
    int right = height(n->right,h);

    if(left>right){
        h = left+1;
    }
    else{
        h = right+1;
    }

    // we will reach to left's right most node 
    // and then simply add the one to variable right;

    // and from there right will iterate back from stack of recursion with value
    // at every node of the iteration we will add the recursive value
    // and also checking the right and left 

    // at the end will be pointing toward the root node 
    // and then simply compare the left and right 
    // which one will be greater we will add 1 to and return that value back to caller
    
    return h;
}

void inorder(Node* n){
    if(n){
        inorder(n->left);
        cout<<n->data<<" ";
        inorder(n->right);
    }
}


int main(){

    struct Node *root = new Node(50);

    insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);
    insert(root, 60);
    insert(root, 70);
    insert(root, 80);
    insert(root, 90);

    inorder(root);

    cout<<endl;
    cout<<height(root,0)<<endl;

    return 0;
}