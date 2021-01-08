#include <limits.h>
#include <stdio.h>

#define V 5
int minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void printSolution(int dist[])
{
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

void dijkstra(int graph[V][V], int src)
{
    int dist[V]; // The output array. dist[i] will hold the shortest

    bool sptSet[V]; // sptSet[i] will be true if vertex i is included in shortest
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {

        int u = minDistance(dist, sptSet);

        sptSet[u] = true;

        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printSolution(dist);
}

int main()
{
    /* Let us create the example graph discussed above */
    int graph[V][V] = {{0, 10, 0, 30, 100},
                       {10, 0, 50, 0, 0},
                       {0, 50, 0, 20, 10},
                       {30, 0, 20, 0, 60},
                       {100, 0, 10, 60, 0}};

    dijkstra(graph, 0);

    return 0;
}