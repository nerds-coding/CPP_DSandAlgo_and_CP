#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define vec vector<ll>

class Graph
{
    int val;
    map<int, vector<int> > adjList;

public:
    void addEdge(int v, int e);
    void DFS(int v);
};

void Graph::addEdge(int v, int e)
{
    adjList[v].push_back(e);
    adjList[e].push_back(v);
}

void Graph::DFS(int v)
{
    map<int, bool> visited;
    vector<int> stack;
    stack.push_back(v);

    /*
    we will use the stack(ofcourse for the DFS)

    we will loop all the neighors of the node 
    and also check that they are visited or not

    if not then we will push in the stack to avoid the reduncy 

    then we will check that if the node is not visited then it the most recent neighbor and
    and we will print that parent node and visit that parent nodes neighbors
    
    
    */

    while (stack.size())
    {
        v = stack.back();
        stack.pop_back();

        if (!visited[v])// if the 
        {
            cout << v << " ";
            visited[v] = true;
        }

        for (int i : adjList[v])
        {
            if (!visited[i])
            {
                stack.push_back(i);
            }
        }
    }
}

int main()
{
    Graph g; // Total 5 vertices in graph
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);

    g.DFS(5);
    return 0;
}