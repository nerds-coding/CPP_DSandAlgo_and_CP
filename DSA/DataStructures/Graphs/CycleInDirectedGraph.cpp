#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define vec vector<ll>

/*
we will be using  two vector 
1 -> visited vector to check the current node is visited or not
2 -> if in the dfs the node are visited to mark the nodes as order = true
        so if the node is visited and order == true and again we come to visit the same node
        then its is cycle

while tracing back we will mark order == false
b'coz we are now going to iterate the other node and it's neighbour (like dfs)
*/



class Graph
{

    map<int, vector<int> > adj;

public:
    void addEdge(int v, int e)
    {
        adj[v].push_back(e);
    }

    bool dfs(int s, vector<bool> &order, vector<bool> &vis)
    {
        vis[s] = true;
        order[s] = true;

        for (auto i : adj[s])
        {
            if (!vis[i])
            {
                if (dfs(i, order, vis))
                {
                    return true;
                }
            }
            else if (order[i])
            {
                return true;
            }
        }

        order[s] = false;
        return false;
    }

    bool isCyclic(int v)
    {
        vector<bool> vis(v, false);
        vector<bool> order(v, false);

        for (int i = 0; i < v; i++)
            if (!vis[i] && dfs(i, order, vis))
                return true;

        return false;
    }
};

int main()
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(4, 4);

    cout << g.isCyclic(5) << endl;
    return 0;
}