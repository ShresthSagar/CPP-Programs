#include<iostream>
using namespace std;

int ar[1000]={0};

void ins(int val)
{
    ar[val]=1;
    cout<<"inserted "<<val<<endl;
}

void sear(int val)
{

    if(ar[val]==1)
        cout<<"Found "<<val<<endl;
    else
        cout<<"Not Found "<<val<<endl;
}

void del(int val)
{
    ar[val]=0;
    cout<<"Deleted "<<val<<endl;
}

int main()
{
    ins(20);
    ins(30);
    ins(32);
    sear(20);
    sear(12);
    del(20);
    sear(20);

    return 0;
}
