#include<bits/stdc++.h>
using namespace std;

void toh(int n, int s, int d, int m) {
    if(n==1) 
    {
        cout<<n<<" "<<s<<"->"<<d<<"\n";
        return;
    }

    toh(n-1, s, m, d);
    cout<<n<<" "<<s<<"->"<<d<<"\n";
    toh(n-1, m, d, s);

}

int main()
{
    int n=4;
    toh(n, 1,2,3);
    return 0;
}