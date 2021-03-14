#include <iostream>
#include <map>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

// in DFS we first visit a node then followed its adjacent node
// and of that adjacent node we followed its adjacent node to get the depth 
// and then we traverse back after reaching the null adjacent node

// then we follow all the above step till all the node are visited


template <typename T>
class Graph
{

    map<T, vector<T> > adjList;

public:
    void addEdge(T v, T e) // to add the nodes and Edges in the graph
    {
        adjList[v].push_back(e);
        adjList[e].push_back(v);
    }

    void dfsHelpher(T src, map<T, bool> &visited)
    {

        visited[src] = true; // to mark the node is visited to avoid reduncy

        cout << src << " ";

        for (T x : adjList[src])// accessing the vector element in loop
        {
            if (!visited[x])// and checking that if not visited the call the function making 
            // that node as src node
            {
                dfsHelpher(x, visited);
            }
        }
    }

    void dfs(T src)
    {

        map<T, bool> visited;

        for (auto i : adjList)// to mark all the nodes un-visited initially
        {
            T node = i.first;
            visited[node] = false;
        }

        dfsHelpher(src,visited);
        cout<<endl;
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.dfs(0);
    return 0;
}