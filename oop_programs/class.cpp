#include<bits/stdc++.h>
using namespace std;
class rect{

    int l, b;
    public:
    rect(){
        l = 10;
        b=20;
    }
    rect(int x=90)
    {
        l=x;
        b=100;
    }

    void print(){
        cout<<" l = "<<l<<" b = "<<b;
    }
};

int main()
{
    rect r(25);
    r.print();
    return 0;
}

