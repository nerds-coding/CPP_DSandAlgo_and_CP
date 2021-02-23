#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <utility>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int vals)
    {
        this->data = vals;
        this->left = NULL;
        this->right = NULL;
    }
};

struct Node *insert(Node *n, int val)
{

    if (!n)
    {
        return new Node(val);
    }
    else
    {
        if (n->data < val)
        {
            n->right = insert(n->right, val);
        }
        else
        {
            n->left = insert(n->left, val);
        }
    }
}

// check the height of tree
// if the left/ right subtree have absloute diff >1
// then it's not a balanced binary tree

bool flag;
bool balancedTree(Node* n){
    if(!n) return 0;

    int l = balancedTree(n->left);
    int r = balancedTree(n->right);

    if(abs(l-r)>1) flag = false;

    return max(l,r)+1;
}

int main()
{

    struct Node *root = new Node(3);
    root->left = new Node(4);
    root->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(17);
    root->right->left->right = new Node(18);
    root->right->right->right = new Node(25);

    flag = true;

    balancedTree(root);
    cout<<flag<<endl;
    return 0;
}
