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

// ---------------------------- Recursive Method ----------------------------------
void verticalTraversal(Node *n, int level, map<int, vector<int> > &mymap)
{
    if (!n)
    {
        return;
    }
    mymap[level].push_back(n->data);

    verticalTraversal(n->left, level - 1, mymap); // same as iteravet approach
    verticalTraversal(n->right, level + 1, mymap);
}

vector<int> verticalOrder(Node *n)
{
    map<int, vector<int> > mymap;

    vector<int> vals;

    verticalTraversal(n, 0, mymap);

    for (auto i = mymap.begin(); i != mymap.end(); i++)
    {
        for (int j = 0; j < i->second.size(); j++)
        {
            cout << " " << i->second[j];
        }
        cout << endl;
    }
}

// ---------------------------- Iterative Method ----------------------------------
void iteratorVerticalTraversal(Node *n)
{
    // we will use map to store the level of the tree
    // if we are moving to left then we will subtract with -1
    // for right node we add 1;

    // level is key
    // and right/left node's is value stored in vector
    map<int, vector<int> > mymap;

    vector<pair<Node *, int> > q; // Queue
    // to store the current node and their level
    // b'coz a node have different level and value(-ve to +ve)

    q.push_back(make_pair(n, 0));

    mymap[0].push_back(n->data);

    while (q.size())
    {
        pair<Node *, int> cur = q.front();
        q.erase(q.begin() + 0);

        if (cur.first->left)
        { // if we have left then store the left value(data)
            // and also add into the queue with level
            mymap[cur.second - 1].push_back(cur.first->left->data);
            q.push_back(make_pair(cur.first->left, cur.second - 1)); // in this left side
            // we might always have -ve levels
        }
        if (cur.first->right)
        {
            mymap[cur.second + 1].push_back(cur.first->right->data);
            q.push_back(make_pair(cur.first->right, cur.second + 1));

            //for right side we might always have +ve levels
        }
    }

    for (auto i = mymap.begin(); i != mymap.end(); i++)
    { // printing the values accosiated with levels;
        for (int j = 0; j < i->second.size(); j++)
        {
            cout << " " << i->second[j];
        }
        cout << endl;
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
    cout << "Vertical order traversal is \n";
    iteratorVerticalTraversal(root);
    return 0;
}