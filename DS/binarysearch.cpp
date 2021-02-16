#include<iostream>
using namespace std;

int binarysearch(int ar[], int n, int search_num)
{

    int i,j;
    int left=0, right = n-1;
    int mid;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(ar[mid]==search_num)
        {
            return ar[mid];
        }
        else if(ar[mid]>search_num)
        {
            right = mid-1;
        }
        else if(ar[mid]<search_num)
        {
            left = mid+1;
        }

    }
    return -1;

}

int main()
{
    int ar[] = {1,2,3,4,5};
    cout<<binarysearch(ar, 5, 23)<<"\n";
}
