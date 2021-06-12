#include <iostream>
using namespace std;

class GraphMatrix
{
private:  int V, matrix[100][100];

public:
    GraphMatrix(int vertices)
    {
        int V = vertices;
        int matrix[V][V] = {0};
    }

    bool isEdge(int x, int y);
    void removeEdge(int x, int y);
    void addEdges();
    void inputEdges();
    void printMat();
    void printEdges();
};

bool GraphMatrix::isEdge(int x, int y)
{
    return matrix[x][y];
}

void GraphMatrix::removeEdge(int x, int y)
{
    matrix[x][y] = 0;
}


void GraphMatrix::addEdges()
{
    cout << "\nEnter edges\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> matrix[i][j];
        }
    }
}


void GraphMatrix::inputEdges()
{
    int i,j;
    char q;
    
    do{
        cout<<"Enter edge (from X->Y): ";
        cin>>i>>j;
        matrix[i-1][j-1] = 1;
        matrix[j-1][i-1] = 1;
        cout<<"Want to enter more edges? (y or n): ";
        cin>>q;
    }while(q=='y'||q=='Y');
}


void GraphMatrix::printMat()
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << matrix[i][j]<<"\t";
        }
        cout << endl;
    }
}


void GraphMatrix::printEdges()
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (matrix[i][j] == 1)
            {
                cout << "Edge {" << i + 1 << "," << j + 1 << "}\n";
            }
        }
    }
}

int main()
{
    int v=5;
    // cout << "Enter number of vertices: ";
    // cin >> v;
    GraphMatrix graph(v);
    graph.inputEdges();
    graph.printMat();
    graph.addEdges();
    graph.printEdges();
    return 0;
}