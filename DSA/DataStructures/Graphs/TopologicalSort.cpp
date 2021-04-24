#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define ll long long
#define vec vector<ll>

// TOPOLOGICAL SORTING works with Directed Acyclic Graph Only

class Graph
{
    unordered_map<int, vector<int> > adjList;

public:
    void addEdge(int v, int u)
    {
        adjList[v].push_back(u);
    }

    void topologicalSort()
    {
        unordered_map<int,int> degree;// we will simply count the degree of all the incoming nodes
        vector<int> q;//queue
        vector<int> ans;// to store the topological sorted nodes

        for(auto i:adjList){
            for(auto j:adjList[i.first]){
                degree[j]++;// adding a node have how many of the incoming nodes/associated with other nodes
            }
        }

        for(auto i:degree){
            if(degree[i.first]==0) q.push_back(i.first);// if we have any node with zero degree than push into the queue
        }

        while (q.size())
        {
            int nodes = q.front();
            q.erase(q.begin()+0);

            ans.push_back(nodes);// pushing the first node which have degree of zero

            for(auto i:adjList[nodes]){
                degree[i]--;// then removing all the nodes with whom it was associated
                if(degree[i]==0) q.push_back(i);// and when we will delete the associated node 
                // then definetly only those neighouring node will be affected and into those associated there
                // will be change that one of those node will be update to zero degree
                // thus if then we will put that into the q
            }
        }

        for(auto i:ans){// printing the topological sorted value
        // In TOPOLOGICAL SORTING there are many combinations of answer possible
            cout<<i<<" ";
        }
        
    }
};

int main()
{
    Graph g;
    g.addEdge(1, 0);
    g.addEdge(2, 0);
    g.addEdge(3, 0);

    g.topologicalSort();
    return 0;
}