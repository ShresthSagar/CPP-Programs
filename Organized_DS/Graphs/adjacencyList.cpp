#include<bits/stdc++.h>
using namespace std;

class GraphList
{
    vector<int>list[100];
    int V;

    public:
            GraphList(int vertices)
            {
                V = vertices;
            }

    void addEdges(int u, int v);
    void printList();

};


void GraphList::addEdges(int u, int v)
{
    list[u-1].push_back(v);
    list[v-1].push_back(u);
}


void GraphList::printList()
{
    for(int i = 0; i < V; i++)
    {
        cout<<"\nAdjacency List of vertex "<<i+1<<": \n";
        for(auto u: list[i])
        cout<<"->"<<u;
    }
}

int main(){

    GraphList graph(5);
    graph.addEdges(1,2);
    graph.addEdges(3,5);
    graph.addEdges(2,5);
    graph.addEdges(1,3);

    graph.printList();

    return 0;
}    