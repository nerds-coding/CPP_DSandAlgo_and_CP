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


/*

Make two stack using STACK library;

push root in s1;

if any of stack is not empty run till both the stack is empty

first approach the -> stack one 
and print the pop-node value
and then push the left and right  Node value in S2
from left to right
** b'coz push in stack mean inserting on the top of the stack and pop also;

then:
check do the same in s2 ** but in right to left;

*/

void zigzagTravel(Node *n)
{

    stack<Node*> s1;
    stack<Node*> s2;

    s1.push(n);

    while (s1.size()|| s2.size())
    {
        while(s1.size()){
            Node* cur = s1.top();
            s1.pop();

            cout<<cur->data<<" ";

            if(cur->left){
                s2.push(cur->left);
            }
            if(cur->right){
                s2.push(cur->right);
            }
        }

        while(s2.size()){
            Node* cur = s2.top();
            s2.pop();

            cout<<cur->data<<" ";

            if(cur->right){
                s1.push(cur->right);
            }
            if(cur->left){
                s1.push(cur->left);
            }
        }
    }
    
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

    zigzagTravel(root);
    return 0;
}
