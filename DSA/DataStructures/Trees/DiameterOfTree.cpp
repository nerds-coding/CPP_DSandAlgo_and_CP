#include <iostream>
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

    return n;
}

int height(Node* n){
    if(!n){
        return 0;
    }

    return 1+(max(height(n->left),height(n->right)));
}

int diameter(Node* n){
    if(!n){
        return 0;
    }

    // this function totally depends upon the height fuction

    // we are simply add the height of right and left part of the tree;
    
    // and also calling the diameter only for the left and right 
    // b'coz may be the biggest part reside only on the left or right side of the node;

    // we at each step will check the left node and right node and the simply add the 
    // height of the both node 
    // which is totally equal to the diameter

    int h1 = height(n->left)+height(n->left)+1;
    int h2 = diameter(n->left);
    int h3 = diameter(n->right);

    return max(h1,max(h1,h2));

    // which ever the max value of the diameter will be returned
}

int main()
{

    struct Node *root = new Node(50);

    insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);
    insert(root, 60);
    insert(root, 70);
    insert(root, 80);
    insert(root, 90);

    cout << endl;
    cout<<diameter(root)<<endl;

    return 0;
}