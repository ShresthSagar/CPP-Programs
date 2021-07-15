#include<bits/stdc++.h>
using namespace std;
int board[11][11];

bool isPossible(int n, int row, int col) {
int i,j;
//column
for(i=row-1; i>=0; i--) {
    if(board[i][col])
    {
        //cout<<i<<" "<<col<<"occupied\n";
        return false;
    }
}

i=row-1;
//left diagonal
for(j=col-1; (j>=0 && i>=0); j--, i--) {
    if(board[i][j])
    {
        //cout<<i<<" "<<j<<"occupied\n";
        return false;
    }
}
//right diagonal
i=row-1;
for(j=col+1; (j<n && i>=0); j++, i--) {
    if(board[i][j])
    {
        //cout<<i<<" "<<j<<"occupied\n";
        return false;
    }
}

return true;

}

bool placeNQueens(int n, int row)
{
    if(row==n)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"Placed\n\n";
        return true;
    }
    bool isPlaced;
  //place in this row ->columns one by one 
  for(int j=0; j<n; j++)
  {
      if(isPossible(n, row, j))
      {
          board[row][j]=1;
          isPlaced = placeNQueens(n, row+1);
          board[row][j]=0;
      }
  }
    return isPlaced;
}



void display(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}

bool isValid(int i, int j, int n)
{
    // up
    for(int r=i; r>=0; r--)
    {
        if(board[r][j]==1)
        return false;
    }

    //left dg 
    int r=i, c = j;
    while(r>=0 && c>=0)
    {
        if(board[r][c]==1)
        return false;
        r--;
        c--;
    }

    //right dg  
    r=i, c = j;
    while(r>=0 && c<n)
    {
        if(board[r][c]==1)
        return false;
        r--;
        c++;
    }
return true;

}

bool placeNQueens2(int n, int row)
{
    if(row>=n)
    {
        display(n);
        cout<<"\n";
        return true;
    }
bool isPlaced;
    for(int j=0; j<n; j++)
    {
        if(isValid(row, j, n))
        {
            board[row][j] = 1;
            isPlaced = placeNQueens2(n, row+1);
            board[row][j] = 0;
        }
    }

return isPlaced;

}



int main ()
{
    int n; 
    cout<<"Enter n: ";
    cin>>n;

    memset(board, 0, 11*11*sizeof(int));
    if(!placeNQueens2(n, 0))
    cout<<"Cannot Place Queens in this grid\n";
    return 0;
}