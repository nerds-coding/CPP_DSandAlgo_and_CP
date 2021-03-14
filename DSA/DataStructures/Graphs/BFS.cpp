#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define vec vector<ll>

template <typename T>// Making a Generic Class of Graph
class Graph
{
    map<T, vector<T> > adjList; // to store the graph in Adjacency List;

public:
    void addEdge(T v, T e) // Adding the Node and Edges;
    {
        adjList[v].push_back(e);
        adjList[e].push_back(v);
    }

    void breadthFirstSearch(T src)
    {
        map<T, bool> visited; // to check wether that node is visited or not

        vector<T> q; // to store all the visited graph nodes
        q.push_back(src);

        visited[src] = true; // initially marking source node visited

        while (q.size())
        {
            T node = q.front();
            q.erase(q.begin() + 0);

            cout<<node<<" ";
            for (T i : adjList[node]) // to iterate throught Adjacency list connected to
            // corresponding Node
            {
                if (!visited[i])// if that particular node is not visited 
                // then we will access all the value of the list and also 
                // push in the Queue
                // and Marked the map visited node = true to avoid repeatly visiting same node
                {
                    q.push_back(i);
                    visited[i] = true;
                }
            }
        }
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

    g.breadthFirstSearch(0);

    return 0;
}