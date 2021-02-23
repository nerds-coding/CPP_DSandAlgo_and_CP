#include <iostream>
#include <map>
#include <vector>
#include <utility>
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

struct Node *insert(Node *n, int value)
{
    if (n == NULL)
    {
        return new Node(value);
    }
    else
    {
        if (n->data > value)
        {
            n->left = insert(n->left, value);
        }
        else
        {
            n->right = insert(n->right, value);
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

/*
we'll use map to store the data of the nodes;

if we approach to left then add 1 to mark as new node and new diagonal
if we tend to move toward right depth will same as current node to consider as same diagonal

// adding one in depth means making new diagonal list
*/


// --------------------------------- Recursive Approach ---------------------------------------
void diagonalTree(Node *n, int d, map<int, vector<int> > &mymap)
{
    if (n)
    {
        mymap[d].push_back(n->data);
        diagonalTree(n->left, d + 1, mymap);
        diagonalTree(n->right, d, mymap);
    }
}

void diagonal(Node *n)
{
    map<int, vector<int> > diag;

    vector<pair<Node *, int> > q;
    vector<int> vals;

    diagonalTree(n, 0, diag);

    for (auto i = diag.begin(); i != diag.end(); i++)
    {
        for (int j = 0; j < i->second.size(); j++)
        {
            cout << i->second[j] << " ";
        }
        cout << endl;
    }
}

// --------------------------------- Iterative Approach ---------------------------------------

void DiagonalTreeTravlersal(Node *n)
{
    map<int, vector<int> > diag;

    vector<pair<Node *, int> > q;

    q.push_back(make_pair(n, 0));

    //diag[0].push_back(n->data);

    while (q.size())
    {

        pair<Node *, int> cur = q.front();
        q.erase(q.begin() + 0);

        diag[cur.second].push_back(cur.first->data);

        if (cur.first->left)
        {
            q.push_back(make_pair(cur.first->left, cur.second + 1));
        }

        if (cur.first->right)
        {
            q.push_back(make_pair(cur.first->right, cur.second));
        }
    }

    for (auto i = diag.begin(); i != diag.end(); i++)
    {
        for (int j = 0; j < i->second.size(); j++)
        {
            cout << i->second[j] << " ";
        }
        cout << endl;
    }
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

    //inorder(root);
    DiagonalTreeTravlersal(root);

    return 0;
}