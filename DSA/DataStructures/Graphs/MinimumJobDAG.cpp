#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <set>
using namespace std;

#define ll long long
#define vec vector<ll>

//geeksforgeeks.org/minimum-time-taken-by-each-job-to-be-completed-given-by-a-directed-acyclic-graph/

template <typename T>
class Graph
{
    unordered_map<T, vector<T> > adjList;

public:
    void addEdge(T v, T u)
    {
        adjList[v].push_back(u);
    }

    void jobTiming(int v)
    {
        vector<int> degree(v,0);

        vector<pair<T, int> > q;
        vector<T> ans;

        for (auto i : adjList)
        {
            for (auto j : adjList[i.first])
            {
                degree[j]++;
            }
        }

        for (auto i : degree)
        {
            if (!degree[i.first])
            {
                q.push_back(make_pair(i.first, 1));
                cout<<i.first<<endl;
            }
                
        }

        int temp = 2;
        while (q.size())
        {
            pair<T, int> i = q.front();
            q.erase(q.begin() + 0);

            ans.push_back(i.second);
            for (auto j : adjList[i.first])
            {
                degree[j]--;
                if (degree[j] == 0)
                    q.push_back(make_pair(j, temp));
            }

            temp++;
        }

        for (auto i : ans)
        {
            cout << i << " ";
        }
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(1, 5);
    g.addEdge(2, 3);
    g.addEdge(2, 8);
    g.addEdge(2, 9);
    g.addEdge(3, 6);
    g.addEdge(4, 6);
    g.addEdge(4, 8);
    g.addEdge(5, 8);
    g.addEdge(6, 7);
    g.addEdge(7, 8);
    g.addEdge(8, 10);

    g.jobTiming(10);
    return 0;
}