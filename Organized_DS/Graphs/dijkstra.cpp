#include<bits/stdc++.h>
using namespace std;

class GraphList
{
    pair<vector<int>,vector<int>>g[100];
    int V;
    int dist[100];
    bool visited[100];

    public:
            GraphList(int vertices)
            {
                V = vertices;
                dist[V] = {INT_MAX};
                visited[V] = {false};
            }

    void addEdges(int u, int v, int wt);
    void printList();
    void dijkstra(int s);
    void relax(int i);

};

void GraphList::addEdges(int u, int v, int wt)
{
    g[u-1].first.push_back(v);
    g[u-1].second.push_back(wt);
    g[v-1].first.push_back(u);
    g[v-1].second.push_back(wt);

}

void GraphList:: printList()
{
    for(int i=0; i<V; i++)
    {

        for(int j=0; j<g[i].first.size(); j++)
        {
            cout<<"{"<<i+1<<","<<g[i].first[j]<<","<<g[i].second[j]<<"}\n";
        }
    }
}
/*
void GraphList:: dijkstra(int s)
{

    dist[s] = 0;

    for(int i = 0; i < V; i++)
    {
        if(!visited[i]){
            visited[i] = true;
            relax(i);
        }
    }
}

void GraphList:: relax(int v)
{
    for(auto x: list[v])
    {
        if(dist[v]);//
    }
}
*/
int main(){
    int src = 0;
    GraphList graph(5);
    graph.addEdges(1,2,5);
    graph.addEdges(3,5,10);
    graph.addEdges(2,5,4);
    graph.addEdges(1,3,8);

    graph.printList();
    // graph.dijkstra(src);
    return 0;
}
