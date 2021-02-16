#include<iostream>
using namespace std;

void recursnto1(int n)
{
    if(n==0)
        return;

    cout<<n<<" ";
    recursnto1(n-1);
}
void recurs1ton(int n)
{
    if(n==0)
        return;
    recurs1ton(n-1);
    cout<<n<<" ";
}

int main()
{
    recurs1ton(10);
    return 0;
}
