#include <bits/stdc++.h>
using namespace std;

int soln[5][5];

void findPath(int maze[5][5], int n, int i, int j, int ctr)
{
    if (i == n - 1 && j == n - 1)
    {
        //reached successfully and return true
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

    soln[i][j] = ctr;
    if (j + 1 < n && maze[i][j + 1] && !soln[i][j+1])
    {
        soln[i][j+1] = soln[i][j]+1;
        findPath(maze, n, i, j + 1, soln[i][j+1]);
        soln[i][j + 1] = 0;
        //ctr--;
    }
    if (i + 1 < n && maze[i + 1][j] && !soln[i+1][j])
    {
        soln[i + 1][j] = soln[i][j]+1;
        findPath(maze, n, i + 1, j, soln[i+1][j]);
        soln[i + 1][j] = 0;
        //ctr--;
    }

    if (i-1 >= 0 && maze[i - 1][j] && !soln[i-1][j])
    {
        soln[i - 1][j] = soln[i][j]+1;
        findPath(maze, n, i - 1, j, soln[i-1][j]);
        soln[i - 1][j] = 0;
        //ctr--;
    }

    if (j - 1 >= 0 && maze[i][j - 1] && !soln[i][j-1])
    {
        soln[i][j - 1] = soln[i][j]+1;
        findPath(maze, n, i, j - 1, soln[i][j-1]);
        soln[i][j - 1] = 0;
        //ctr--;
    }

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
    findPath(maze, 5, 0, 0, ctr);

    return 0;
}