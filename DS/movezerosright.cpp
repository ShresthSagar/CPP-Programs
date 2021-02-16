#include<iostream>
#include<conio.h>

using namespace std;

int temp[8] = {};

void move0(int arr[], int n)
{
    int i, ctr=0,j=0;
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
            temp[j++] = arr[i];

        }

    }

    for(i=0; i<n; i++)
        cout<<"arr["<<i<<"] = "<<temp[i]<<"\n";
}


void moveeff(int ar[], int n)
{
    int ctr =0;
    for(int i=0; i<n; i++)
    {
        if(ar[i]!=0)
        {
            swap(ar[i],ar[ctr]);
            ctr++;
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
