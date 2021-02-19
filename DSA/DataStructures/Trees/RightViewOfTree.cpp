#include <iostream>
#include <vector>
using namespace std;

// similar approach as LeftViewofTree.cpp

// only the made the rightNode calling first



static int level = 0;
vector<int> leftVals;

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

void inorder(Node *n)
{
    if (n)
    {
        inorder(n->left);
        cout << n->data << " ";
        inorder(n->right);
    }
}

// --------------------- Recursive Method --------------------------------

void rightView(Node *n, int currentLevel = 0)
{
    if (!n)
    {
        return;
    }

    // we are making a static int variable named Level
    // Level -> it is use to remember till which level of tree we have been reached

    // currentLevel -> it is used as to determine at which current level we are

    if (level < currentLevel)
    {
        leftVals.push_back(n->data);
        level = currentLevel;
        // level-Vairable will have the last value of the
        // left hand side of the tree (initally) while inorder traversal

        // while making right hand side traversal we will check
        // if the right side have bigger height
        // so some part is exposed from Left side of the view

        // then we will perform the same operation to store values
    }

    rightView(n->right, currentLevel + 1);
    rightView(n->left, currentLevel + 1);
}

// --------------------- Iterative Method --------------------------------

/* vector<int> rightView(Node* n){
    vector<int> vals;
    if(!n){
        return vals;
    }

    vector<Node*> q; // queue

    q.push_back(n); // stroing the root node 

    while(q.size()){
        int size = q.size();

        // each iteration we'll we the fresh size of the q;

        for(int i = 0;i<size;i++){
            // we are only concered with the very left side of the tree 

            Node* cur = q.front();
            q.erase(q.begin()+0);

            // we'll erase the every values till "size"


            if(i == 0){
                vals.push_back(cur->data);

                // we 'll store the first value only cause it the value 
                // which will be exposed to the left side the tree view
            }

            if(cur->right){
                q.push_back(cur->right);
            }

            if(cur->left){
                q.push_back(cur->left);
            }

            
        }
    }

    return vals;
}
*/

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

    cout << endl;
    //vector<int> vals = leftView(root);

    rightView(root, 0);

    for (int x : leftVals)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}