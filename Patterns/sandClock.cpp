#include<iostream>
using namespace std;

int row,spaces,stars,l=0,m;   //l=print spaces for 2nd half, m=print stars

void upperHalf(int n)
{
    m=n;
    for(row=0; row<(n+1)/2; row++, m-=2)
    {
        for(spaces=0; spaces<row; spaces++)
            cout<<" ";
        
        for(stars=0; stars<m; stars++)
            cout<<"*";

        cout<<"\n";
    }
}

void lowerHalf(int n)
{
    for(row=(n+1)/2 ;row<n; row++, stars+=2)
    {
        for(l=0; l<spaces; l++)
            cout<<" ";
        
        spaces--;

        for(m=0; m<stars; m++)
            cout<<"*";
        
        cout<<"\n";
    }
}

void pattern(int n)
{
    cout<<"\nFor n = "<<n<<"\n";

    //upper half row wise
    upperHalf(n);

    //if n=odd
    if(n%2)
    {
        spaces--;
        stars+=2; //for removing double 1 star row
    }
    //lower half row wise
    lowerHalf(n);


}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    pattern(n);
    pattern(n+1);
    return 0;
}
