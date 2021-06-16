#include<bits/stdc++.h>
using namespace std;

class TopologicalSort
{
    list <int> dac_graph[100];
    int indegree[100];
    int V;
    public:
            TopologicalSort(int vertices)
            {
                V = vertices;
                for(int i = 0; i <V ; i++)
                indegree[i] = {0};
            }
            void addEdge(int u, int v);
            void printGraph();
            void topoSortFun();
};

void TopologicalSort:: printGraph()
{
    for(int i=0; i<V ; i++)
    {
        for(auto j : dac_graph[i])
        {
            cout<<" edge "<<i<<" to "<<j<<"\n";
        }
    }
}

void TopologicalSort:: addEdge(int u, int v)
{
    dac_graph[u].push_back(v);
    indegree[v]++;
    cout<<"added "<<u<<", "<<v<<" indegree "<<indegree[v]<<"\n";
}


void TopologicalSort:: topoSortFun()
{
    queue<int> q;
    for(int i=0; i<V; i++)
    {
        if(indegree[i]==0)
        q.push(i);
        cout<<"Pushed "<<i<<" in the q\n";
    }

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<<u<<"\t";

        for(auto i: dac_graph[u])
        {
            indegree[i]--;
            if(indegree[i]==0)
            q.push(i);
        }

    }

}

int main()
{
    TopologicalSort tp(5);
    tp.addEdge(0,2);
    tp.addEdge(0,3);
    tp.addEdge(2,3);
    tp.addEdge(1,3);
    tp.addEdge(1,4);

    tp.topoSortFun();
    return 0;
}
