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
        if(n->data < val){
            n->right = insert(n->right,val);
        }else{
            n->left = insert(n->left,val);
        }
    }

    return n;
}

void inorder(Node* n){
    if(n!=NULL){
        inorder(n->left);
        cout<<n->data<<" ";
        inorder(n->right);
    }
}

void bfs(Node* n){
    if(n){
        vector<Node*> q;
        q.push_back(n);
        while(!q.empty()){
            Node* qq = q.front();
            q.erase(q.begin()+0);
            if(qq->left){
                q.push_back(qq->left);
            }
            if(qq->right){
                q.push_back(qq->right);
            }
        }
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

    //deleteNode(root,50);

    bfs(root);

    //inorder(root);



    return 0;
}