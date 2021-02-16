#include<iostream>
#include<conio.h>
using namespace std;

int maximum(int a, int b, int c)
{

    if((a>=b)&&(a>=c))
    {
            return a;
    }

    if((b>=a)&&(b>=c))
    {
        return b;
    }

    else return c;

}
int maxpiece(int a, int b, int c, int n)
{
    if(n<0)
        return -1;
    else if(n==0)
        return 0;

    //cout<<"n="<<n<<"\n";
    int ans = maximum(maxpiece(a,b,c,n-a), maxpiece(a,b,c,n-b), maxpiece(a,b,c,n-c));
    if(ans!=-1)
        {
            return ans+1;
        }
    else
        return (ans);
}




int main()
{
    int n=138;
    int a = 138, b = 3, c = 10;
    cout<<"Number of cuts = "<<maxpiece(a,b,c,n);
    //cout<<maximum(1,1,0);

    return 0;
}






















/*
int maximum(int a, int b, int c)
{

    if((a>b)&&(a>c))
    {
            return a;
    }

    if((b>a)&&(b>c))
    {
        return b;
    }

    else return c;

}


int maxpiece(int n, int a, int b, int c)
{

    if(n<0)
        return -1;
    else if(n==0)
        return 0;

    int ans;
    ans = maximum(maxpiece(n-a, a,b,c), maxpiece(n-b, a,b,c), maxpiece(n-c, a,b,c));
    if(ans ==-1)
        return ans;
    else
        return ans+1;

}


int main()
{

    int n, a, b, c, out;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter a, b, c : ";
    cin>>a>>b>>c;

    out = maxpiece(n,a,b,c);

    cout<<out<<" cuts\n";
    return 0;
}
*/
