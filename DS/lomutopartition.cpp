#include<iostream>
#include<conio.h>
using namespace std;

int lomutoPart(int ar[], int l, /* int h, */int pivot)
{
    //swap(ar[h], ar[pivot]);
    //pivot=h;
 //
    int h = pivot;
        int i = l-1, j;
        //cout<<"\ni = "<<i<<"\n";
        for(j=l ; j<h; j++)
        {
            if(ar[j]<=ar[pivot])
            {
                swap(ar[i+1],ar[j]);
                i++;
            }

        }

        swap(ar[i+1], ar[pivot]);
        return i+1;

}

void qsort(int ar[],  int l, int r)
{
    if(l<r)
    {
        int p = lomutoPart(ar, l, r);
        qsort(ar, l, p-1);
        qsort(ar, p+1, r);

    }
}

int main()
{
    int ar[6] = {10000,1000,2000,100000,500,210};
    //lomutoPart(ar, 0, 5);
    qsort(ar, 0, 5);
    for(int i = 0 ; i<6; i++)
        cout<<ar[i] << " ";
    return 0;
}
