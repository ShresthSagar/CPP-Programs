#include<iostream>
using namespace std;

void zigzag(int n)
{
    cout<<"\n\nN="<<n<<"\n\n";

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<4*(n-1)+1; j++)
        {
            if(i+j==n-1||i+j==3*(n-1))
                cout<<"*";
            else if(j-i==n-1||j-i==3*(n-1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int n=35;
    
    zigzag(n);

    zigzag(n+1);

    zigzag(n+2);
    return 0;
}
