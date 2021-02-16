#include<iostream>
#include<conio.h>

using namespace std;


void bubblesort(int ar[], int n)
{

    int i, j, temp;
    bool swapped = true;    //for op[timized bubble sort
    for(i=0;i<n-1;i++)
    {
        swapped = false;
        for(j=0; j<n-i-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                /*temp = ar[j+1];
                ar[j+1] = ar[j];
                ar[j] = temp;*/
                swap(ar[j+1],ar[j]);
                swapped = true;  //optimized bubble sort

            }

        }
        if(!swapped)
        {
           //cout<<"i="<<i<<" Breaking...";
            break;
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<ar[i] <<" ";
    }

}


int main()
{
    int ar[6] = {1, 4, 6, 50, 200, 1700};
    bubblesort(ar, 6);
    getch();
    return 0;
}
