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

// we'll first iterate to right most node of the root 
// initially our head is null 


/*
1-> make binary right poniter point to last head reference
2-> if (head) then head's left point to the current node 
3-> then finally change the head pointer to current node

** at 3rd step we change the current head point to current node
*/

void BtoDLL(Node* n,Node** head){
    if(!n){
        return;
    }

    BtoDLL(n->right,head);

    n->right = *head; // *head is address of the linked list node 
    // n->left store the address because it is itself a pointer of Node

    if(*head){
        (*head)->left = n;// still our head is pointing to last node
    }

    *head  = n; // here we change the head reference to current node of the root to 
    // double linked list

    BtoDLL(n->left,head);
}

Node* convertDLL(Node* n){
    Node* head = NULL;
    BtoDLL(n, &head);
    return head;
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

    

    Node* head = convertDLL(root);
    
    while(head){
        cout<<head->data<<" ";
        head = head->right;
    }
    cout<<endl;
    return 0;
}
