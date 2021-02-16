#include<iostream>
#include<conio.h>

using namespace std;


void selsort(int ar[], int n)
{
    int i, j, small;

    for(i=0; i<n; i++)
    {
        small = i;
        for(j=i+1; j<n; j++)
        {
            if(ar[j]<ar[small])
                small = j;
        }

        swap(ar[small],ar[i]);
        /*if(small!=i)
        {
            temp = ar[small];
            ar[small] = ar[i];
            ar[i] =temp;
        }*/

    }

    for(i=0;i<n;i++)
    {
        cout<<ar[i] <<" ";
    }

}


int main()
{
    int ar[6] = {100, 4, 60, 50, 200, 1700};
    selsort(ar, 6);
    getch();
    return 0;
}
