#include<bits/stdc++.h>
using namespace std;
int ans[5][5] = { {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}};
int ratMaze(int maze[][5], int n, int i, int j)
{
    bool ret;
    if(i==n-1 && j==n-1)
    {
        ans[i][j] = 1;
        return true;
    }
//   cout<<"\ni="<<i<<" j="<<j<<endl;
    if(i+1 < n && maze[i+1][j])
    {
        ret = ratMaze(maze, n, i+1, j);
        if(ret)
        {
            ans[i][j] = 1;
            return ret;
        }
    }
    if(j+1 < n && maze[i][j+1])
    {
        ret = ratMaze(maze, n, i, j+1);
        if(ret)
        {
            ans[i][j] = 1;
            return ret;
        }
    }

    cout<<"Returned 0 by "<<i<<" "<<j<<"\n";
    return false;   

}

int main()
{
    int maze[5][5] = {
            {1,1,0,1,0},
            {0,1,0,1,0},
            {0,1,1,1,1},
            {0,1,1,0,1},
            {0,1,0,1,1}
    };

    if(ratMaze(maze, 5, 0, 0))
    {
        cout<<"Yes\n";
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else
    cout<<"No\n";

    return 0;
}