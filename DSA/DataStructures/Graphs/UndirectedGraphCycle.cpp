#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define vec vector<ll>

class Graph
{

    map<int, vector<int> > g;

public:
    void addEdge(int v, int e)
    {
        g[v].push_back(e);
        g[e].push_back(v);
    }

    bool dfs(int u, int p, vector<bool> &vis)
    {
        vis[u] = true;

        for (auto i : g[u])
        {
            if (!vis[i])
            {
                if (dfs(i, u, vis))
                    return true;
            }
            else if (i != p || i == u) // to check if it visited and also the node is 
            // not a self loop or current node != p
                return true;
        }

        return false;
    }

    bool isCycle(int v)
    {
        vector<bool> vis(v, false);

        for (int i = 0; i < v; i++)// we will use using a parent node to mark a node 
        // such that we can trace who is it's parent
            if (!vis[i] && dfs(i, -1, vis)) // to check between a single node and it's neighbors
            // if we find cycle inside neighbor then no need to move further 
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

    cout<<g.isCycle(5)<<endl;
    return 0;
}