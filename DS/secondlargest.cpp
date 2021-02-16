#include<iostream>
using namespace std;

int func2(int arr[], int n)
{
    int i,j, sl=-1, l=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>sl)
        {
            if(arr[i]>l)
            {
                sl = l;
                l=arr[i];
            }
            else if(arr[i]<l)
                sl=arr[i];
        }


    }
    return sl;
}


int main()
{
    int ar[]  = {9, 19};
    int ans;
    ans = func2(ar, 2);
    cout<<"Ans = "<< ans<<"\n";
    return 0;

}
