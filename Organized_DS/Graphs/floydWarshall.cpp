#include<iostream>
using namespace std;
const int V = 4;
class Graph
{
    int graph[V+1][V+1] = {
        {0, 0, 0, 0, 0},
        {0, 0, 9, -4, 999},
        {0, 6, 0, 999, 2},
        {0, 999, 5, 0, 999},
        {0, 999, 999, 1, 0}
    };

    int dist[V+1][V+1];

    public: 
            void initializeDist();
            void floydWarshall();
            void printGraph();
};

void Graph:: initializeDist()
{
    for(int i = 0; i<=V; i++)
    {
        for(int j = 0; j<=V; j++)
        dist[i][j] = graph[i][j];
    }
}

void Graph:: printGraph()
{
    for(int i=0; i<=V; i++)
    {
        for(int j=0; j<=V; j++)
        cout<<graph[i][j]<<" ";
    cout<<"\n";
    }
}

void Graph:: floydWarshall()
{
    initializeDist();

    for(int k=1; k<=V; k++)
    {
        for(int i=1; i<=V; i++)
        {
            if(i==k) continue;
            for(int j=1; j<=V; j++)
            {
                if(j==k) continue;
                
                if(i!=j)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    for(int i=0; i<=V; i++)
    {
        for(int j=0; j<=V; j++)
        cout<<dist[i][j]<<" ";
    cout<<"\n";
    }
}

int main()
{
    Graph g;
    cout<<"\nThe graph is: \n";
    g.printGraph();
    cout<<"------\n";

    cout<<"The Distance matrix is: \n";
    g.floydWarshall();
    return 0;
}