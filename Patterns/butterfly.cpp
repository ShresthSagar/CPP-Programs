#include<iostream>
using namespace std;

int row,spaces,stars;

void upperHalf(int n)
{
    for(row=0; row<n; ++row)
    {
        for(stars=0; stars<=row; stars++)
            cout<<"*";

        for(spaces=n; spaces>=row+1; spaces--)
            cout<<" ";

        for(spaces=n-1; spaces>=row+1; spaces--)
            cout<<" ";

        for(stars=0; stars<=row; stars++)
            cout<<"*";
        
        cout<<"\n";
    }

}

void lowerHalf(int n)
{
    for(row=n-1; row>=0; --row)
    {
        for(stars=0; stars<=row; stars++)
            cout<<"*";

        for(spaces=n; spaces>=row+1; spaces--)
            cout<<" ";

        for(spaces=n-1; spaces>=row+1; spaces--)
            cout<<" ";

        for(stars=0; stars<=row; stars++)
            cout<<"*";
        
        cout<<"\n";
    }
}
void pattern(int n)
{
    cout<<"\nFor n = "<<n<<"\n";

    //upper Half
    upperHalf(n);

    //middle row
    for(int i=0; i<=2*n; i++)
        cout<<" ";
    cout<<"\n";

    //lower Half
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
