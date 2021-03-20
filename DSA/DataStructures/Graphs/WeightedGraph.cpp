#include <iostream>
#include <vector>
#include <utility>
#include <map>
using namespace std;

#define ll long long
#define vec vector<ll>

class Graph
{
    map<int, vector<pair<int, int> > > adjList;

public:
    void addEdge(int u, int v, int w);

    void BFS(int src);

    void DFSHelper(int src,map<int,bool> &visited);
    void DFS(int src);

    void NodesAndWeights();
};

void Graph::addEdge(int u, int v, int w)
{
    adjList[u].push_back(make_pair(v, w));
    adjList[v].push_back(make_pair(u, w));
}

void Graph::BFS(int s)
{
    map<int, bool> visited;

    vector<int> q;
    q.push_back(s);
    visited[s] = true;

    while (q.size())
    {
        int n = q.front();
        q.erase(q.begin() + 0);

        cout<<n<<" ";
        for (pair<int,int> i : adjList[n])
        {
            if (!visited[i.first])
            {
                q.push_back(i.first);
                visited[i.first] = true;
            }
        }

    }
}

void Graph::DFSHelper(int s,map<int,bool> &visited){
    visited[s] = true;

    cout<<s<<" ";
    for(pair<int,int> i:adjList[s]){
        if(!visited[i.first]){
            DFSHelper(i.first,visited);
        }
    }
}

void Graph::DFS(int s){
    map<int,bool> visited;

    cout<<endl<<endl;
    DFSHelper(s,visited);

}


void Graph::NodesAndWeights(){

    cout<<endl<<endl;
    
    for(auto i:adjList){
        cout<<"Node  "<<i.first<<" associated with  "<<endl;
        for(pair<int,int> j:adjList[i.first]){
            cout<<" Node "<<j.first<<" having Weight  "<<j.second<<endl;
        }
        cout<<endl<<endl;
    }
}

int main()
{
    Graph g;
    g.addEdge(0, 1, 2);
    g.addEdge(0, 4, 2);
    g.addEdge(1, 2, 2);
    g.addEdge(2, 3, 6);
    g.addEdge(3, 4, 7);
    g.addEdge(4, 5, 7);
    g.addEdge(5, 0, 3);
    g.addEdge(1, 3, 99);
    g.addEdge(2, 4, 20);
    g.addEdge(3, 5, 8);

    g.BFS(0);
    
    g.DFS(0);

    g.NodesAndWeights();
    return 0;
}