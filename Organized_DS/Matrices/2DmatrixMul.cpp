#include <iostream>
using namespace std;

int main()
{
    int A[10][10],B[10][10], C[10][10]={0};
    int r1,r2,c1,c2;
    cin>>r1>>c1>>r2>>c2;


    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>A[i][j];
            //C[i][j]=0;
        }
    }
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>B[i][j];
        }
    }

    for(int i=0; i<r1; i++)  //i=r1
    {
        for(int j=0; j<c2; j++)  //j=c2
        {
            C[i][j]=0;
            for(int k=0; k<c1; k++)  //k=c1 or r2 c1==r2
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
        
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
}