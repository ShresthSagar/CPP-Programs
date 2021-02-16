#include<iostream>
#include<conio.h>

using namespace std;

int temp[8] = {};

void move0(int arr[], int n)
{
    int i, ctr=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            ctr++;
        }
    }
    cout<<"ctr = "<<ctr<<"\n";

    for(i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            temp[ctr++] = arr[i];

        }

    }

    for(i=0; i<n; i++)
        cout<<"arr["<<i<<"] = "<<temp[i]<<"\n";
}

void moveeff(int ar[], int n)
{
    int ctr =n-1;
    for(int i=n-1; i>=0; i--)
    {
        if(ar[i]!=0)
        {
            swap(ar[i],ar[ctr]);
            ctr--;
        }
    }
    for(int i=0; i<n; i++)
        cout<<"arr["<<i<<"] = "<<ar[i]<<"\n";
}

int main()
{
    int arr[8] = {0,1,2,6,0,5,0,0};
    moveeff(arr,8);
    return 0;
}
