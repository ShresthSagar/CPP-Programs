#include<bits/stdc++.h>
using namespace std;
#define max 9999
typedef pair<int, int> p;
typedef pair<vector<int>, vector<int>> pairOfVectors;
// priority_queue<p, vector<p>, greater<p>> pq;

class GraphList
{
    pairOfVectors g[100];
    int V;
    int dist[100];
    //bool finalized[100];
    public:
            GraphList(int vertices)
            {
                V = vertices;
                for(int i=0; i<V; i++)
                dist[i] = max;
                //finalized[100] = {false};
            }

    void addEdges(int u, int v, int wt);
    void bellmanFord(int s);
    bool relax(int u, int adj, int wt);
    bool isNegativeCycle();
    void printList();
    void printDist();
};

void GraphList::addEdges(int u, int v, int wt)
{
    g[u-1].first.push_back(v);
    g[u-1].second.push_back(wt);
    // g[v-1].first.push_back(u);
    // g[v-1].second.push_back(wt);
}

void GraphList:: bellmanFord(int s)
{
    cout<<"Source = "<<s<<"\n";
    dist[s] = 0;
    bool isRelaxed;
    //finalized[s]=true;   
    // pq.push(make_pair(dist[s],s));

    for(int i=0; i < V-1; i++)
    {
        for (int j = 0; j < V; j++)
        {
            for (int k = 0; k < g[j].first.size(); k++)
            {
                isRelaxed = relax(j, g[j].first[k], g[j].second[k]);
            }
        }
    }

    //detect negative edge cycle
    if(isNegativeCycle())
        cout<<"\nThere Exist Negative weight cycle\n";

    printDist();    //print final distances from source(0) vertex
}


bool GraphList:: relax(int u, int v, int wt)
{
    cout<<"Relaxing edge "<<u+1<<","<<v<<" Original weight = "<<wt<<" Current distance "<<dist[v-1]<<"\n";
    if(dist[v-1]>dist[u]+wt)
    {
        dist[v-1] = dist[u]+wt;
        cout<<"Updated edge wt ="<<dist[v-1]<<"\n";
        return true;
        // pq.push(make_pair(dist[v-1], v-1));
    }

    return false;
}

bool GraphList:: isNegativeCycle()
{
    for (int j = 0; j < V; j++)
        {
            for (int k = 0; k < g[j].first.size(); k++)
            {
                if(relax(j, g[j].first[k], g[j].second[k]));
                {
                   return true;
                }
            }
        }
        return false;
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

void GraphList:: printDist()
{
    for(int i = 0; i < V; i++)
    {
        cout<<"\n";
        cout<<"Distance from source to vertex "<<i+1<<" = "<<dist[i];    
    }
}


int main(){
    int src = 0, v = 5;
    GraphList graph(v);
 // cout<<"Src = "<<src;
    graph.addEdges(1,2,5);
    graph.addEdges(5,3,10);
    graph.addEdges(2,5,4);
    graph.addEdges(3,1,-3);
    graph.addEdges(2,4,7);
    graph.printList();
    graph.bellmanFord(src);
    return 0;
}
