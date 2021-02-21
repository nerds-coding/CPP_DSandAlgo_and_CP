#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <utility>
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

void topView(Node *n)
{
    if (!n)
    {
        return;
    }

    map<int, int> mymap;          // we'll make map  to store the level and values
    vector<pair<Node *, int> > q; // we'll make q to store current Node and level

    q.push_back(make_pair(n, 0));

    while (q.size())
    {
        pair<Node *, int> cur = q.front();
        q.erase(q.begin() + 0);

        // we will store the updated value of each level
        mymap[cur.second] = cur.first->data;

        if (cur.first->left)
        {
            q.push_back(make_pair(cur.first->left, cur.second - 1));
        }

        if (cur.first->right)
        {
            q.push_back(make_pair(cur.first->right, cur.second + 1));
        }
    }

    for (auto i = mymap.begin(); i != mymap.end(); i++)
    {
        cout << i->second << " ";
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

    topView(root);
    return 0;
}
