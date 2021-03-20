#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define vec vector<ll>

class Node
{
public:
    int val;
    vector<Node *> neighbors;
    Node()
    {
        val = 0;
        neighbors = vector<Node *>();
    }
    Node(int _val)
    {
        val = _val;
        neighbors = vector<Node *>();
    }
    Node(int _val, vector<Node *> _neighbors)
    {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution
{
public:

// we will be using bfs technique to clone the graph
    Node *cloneGraph(Node *n)
    {
        vector<Node *> q;
        q.push_back(n);

        map<int,bool> visited;
        map<Node*,Node*> newNodes;// extra map to store the new Node with old one

        visited[n->val] = true;
        newNodes[n] = new Node(n->val);

        while (q.size())
        {
            Node* m = q.front();
            q.erase(q.begin()+0);

            for(Node* x:m->neighbors){
                if(!visited[x->val]){// if we haven't visited the node yet then 
                // we will make new Node Object and store corresponding to old one in the map
                    newNodes[x] = new Node(x->val);
                    newNodes[m]->neighbors.push_back(newNodes[x]);// and also we will push
                    // the new objecto as neigbhor to it's new parent adjcent list
                    visited[x->val] = true;
                    q.push_back(x);
                }else{
                    newNodes[m]->neighbors.push_back(newNodes[x]);// we can have same node
                    // neigbhor to many nodes 
                    // it might be we visited before only 
                    // so we will push that node directly into the neighbor list 
                }
            }
        }
        bfs(newNodes[n]);// returning the new node corresponding to the old one
    }

    void bfs(Node *n)
    {
        vector<Node *> q;
        q.push_back(n);

        map<int, bool> visited;
        visited[n->val] = true;

        while (q.size())
        {
            Node *m = q.front();
            q.erase(q.begin() + 0);

            cout << m->val << " ";

            for (Node* x : m->neighbors)
            {
                //cout<<x->val<<endl;
                if (!visited[x->val])
                {
                    q.push_back(x);
                    visited[x->val] = true;
                }
            }
        }
    }
};

int main()
{
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);

    n1->neighbors.push_back(n2);
    n1->neighbors.push_back(n4);

    n2->neighbors.push_back(n1);
    n2->neighbors.push_back(n3);

    n3->neighbors.push_back(n2);
    n3->neighbors.push_back(n4);

    n4->neighbors.push_back(n1);
    n4->neighbors.push_back(n3);

    Solution ss;
    cout<<"Original Node"<<endl;
    ss.bfs(n1);

    cout<<endl<<"Cloned Node"<<endl;
    ss.cloneGraph(n1);
    

    return 0;
}