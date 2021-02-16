#include<iostream>
#include<conio.h>

using namespace std;


void insort(int ar[], int n)
{
    int i, j, small;

    for(i=1; i<n; i++)
    {
        int key = ar[i];
        j = i-1;
            while(j>=0 && ar[j]>key)
            {
                ar[j+1] = ar[j];
                j--;
            }

        ar[j+1] = key;
    }


    for(i=0;i<n;i++)
    {
        cout<<ar[i] <<" ";
    }

}


int main()
{
    int ar[6] = {1, 1, 1, 4, 2, 1};
    insort(ar, 6);
    getch();
    return 0;
}
