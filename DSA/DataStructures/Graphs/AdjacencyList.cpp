#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

void addNewEdge(vector<int> adjList[], int v, int e)
{

    adjList[v].push_back(e);
    adjList[e].push_back(v);
}

void printGraph(vector<int> adjList[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << " --> ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << " -- " << adjList[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int nodes = 5;

    vector<int> adjacencyList[nodes]; // array of vector *2d Vector declaration

    addNewEdge(adjacencyList, 0, 1);
    addNewEdge(adjacencyList, 0, 3);
    addNewEdge(adjacencyList, 1, 2);
    addNewEdge(adjacencyList, 1, 3);
    addNewEdge(adjacencyList, 2, 3);
    addNewEdge(adjacencyList, 3, 4);

    printGraph(adjacencyList);
    return 0;
}