#include <bits/stdc++.h>
using namespace std;

int soln[5][5];

void findPath(int maze[5][5], int n, int i, int j, int ctr)
{
    if(i==n-1 && j== n - 1)
    {
        soln[i][j] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << soln[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n\n";
    }

    if(i>=n || j>= n || i<0 || j<0 || soln[i][j]==1 || maze[i][j]==0)
    return;

    cout<<"i="<<i<<" j="<<j<<"\n";
    soln[i][j] = ctr;
    findPath(maze, n, i-1,j, 1);
    findPath(maze, n, i+1,j, 1);
    findPath(maze, n, i,j-1, 1);
    findPath(maze, n, i,j+1, 1);
    soln[i][j] = 0;

}

int main()
{
    int maze[5][5] = {
        {1, 1, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 1, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 1, 1, 1, 1}};

    int ctr=1;
    memset(soln, 0, 5 * 5 * sizeof(int));
    findPath(maze, 5, 0, 0, 1);

    return 0;
}