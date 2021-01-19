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


void dfs(Node* n){
    if(n){
        vector<Node*> temp;
        temp.push_back(n);
        vector<Node*> stack;
        while (!temp.empty())
        {
            Node* st = temp.front();
            temp.erase(temp.begin()+0);
            stack.push_back(st);
            if(st->left){
                temp.push_back(st->left);
            }
            if(st->right){
                temp.push_back(st->right);
            }
        }
        
        while (!stack.empty())
        {
            Node* st = stack.end();
            stack.erase(stack.end()+0);
            cout<<st->data<<" ";
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

    dfs(root);

    //inorder(root);

    return 0;
}