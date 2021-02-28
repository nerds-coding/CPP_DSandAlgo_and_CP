#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Node *insert(Node *n, int val)
{
    if (n == NULL)
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

void inorder(Node *n)
{
    if (n != NULL)
    {
        inorder(n->left);
        cout << n->data << " ";
        inorder(n->right);
    }
}

void BToDLL(Node *root, Node **head_ref)
{
    // initially we are checking for the right most bottom node
    // if we met the end then we will return the last node
    // start the below procedure
    if (root == NULL)
        return;

    BToDLL(root->right, head_ref);

    root->right = *head_ref;
    // when we met the last bottom right node
    // obiously the last right of tree will be NULL
    // so initially the *d value is also NULL
    // so the last node will point toward the node

    if (*head_ref)
        (*head_ref)->left = root;
    // but when we are back tracking when the parent node of subtree encounter
    // then we will process that node and then we will call the left subtree

    // there we are pointing the last *d's left pointer to n

    *head_ref = root; // now we are defining the *d to node of the tree

    BToDLL(root->left, head_ref);
}

Node *bToDLL(Node *root)
{
    Node *head = NULL;
    BToDLL(root, &head);
    return head;
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

    inorder(root);

    //deleteNode(root,50);

    Node *d = bToDLL(root);

    while (d)
    {
        cout << d->data;
        d->left = d;
    }

    //inorder(root);

    return 0;
}