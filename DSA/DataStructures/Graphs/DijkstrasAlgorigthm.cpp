#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <unordered_map>
#include <set>
using namespace std;

#define ll long long
#define vec vector<ll>

template <typename T>
class Graph
{
    unordered_map<T, vector<pair<T, unsigned int> > > adjList;

public:
    void addEdge(T v, T u, unsigned int w, bool bi = true)
    {
        adjList[v].push_back(make_pair(u, w));
        if (bi)
        {
            adjList[u].push_back(make_pair(v, w));
        }
    }

    void nodesAndEdges()
    {
    }

    void digkstrasAlgo(T s)
    {
        unordered_map<T, unsigned int> curDist;// to store the updated Distance with city;
        for (auto i : adjList)
        {
            curDist[i.first] = INT_MAX; // assigining infinity to all the nodes
        }

        curDist[s] = 0;// assigining distance '0' to  source node;

        set<pair<unsigned int, T> > curSet;// to store the distance and node
        // this will store those node whose neighbouring node is less/can be modify
        // by this way we can avoid visiting all the neigbouring node and updating every time
        // if the node is least/can't be less than we will directly put that value in the curDist
        curSet.insert(make_pair(0, s));

        while (curSet.size())
        {
            pair<unsigned int, T> cur = *(curSet.begin());// to visit only those node which need to be update/can be update possibility
            curSet.erase(curSet.begin());// poping out from the set 

            for (pair<T, unsigned int> i : adjList[cur.second])// then visiting the neigbouring node
            {

                if (cur.first + i.second < curDist[i.first])// filitering out
                // we will visit only those node which have less distance than current node+new node value (cur.first + i.second)
                {
                    // if yes
                    auto f = curSet.find(make_pair(curDist[i.first], i.first));// then find that value and remove from the set
                    if (f != curSet.end())
                    {
                        curSet.erase(f);
                    }

                    curSet.insert(make_pair((cur.first + i.second), i.first));// then insert that new distance in the current set

                    curDist[i.first] = cur.first + i.second; // and also update in the curDistance map
                }
            }
        }


        cout << "From " << s << "  to  " << endl;
        for (auto i : curDist)
        {
            cout << i.first << " distance -->  " << i.second << endl;
        }
    }
};

int main()
{
    // Graph<int> g;
    // g.addEdge(1, 2, 1);
    // g.addEdge(1, 3, 4);
    // g.addEdge(2, 3, 1);
    // g.addEdge(3, 4, 2);
    // g.addEdge(1, 4, 7);

    // g.digkstrasAlgo(1);

    Graph<string> india;
    india.addEdge("Amritsar", "Delhi", 1);
    india.addEdge("Amritsar", "Jaipur", 4);
    india.addEdge("Jaipur", "Delhi", 2);
    india.addEdge("Jaipur", "Mumbai", 8);
    india.addEdge("Bhopal", "Agra", 2);
    india.addEdge("Mumbai", "Bhopal", 3);
    india.addEdge("Agra", "Delhi", 1);

    india.digkstrasAlgo("Mumbai");
    return 0;
}