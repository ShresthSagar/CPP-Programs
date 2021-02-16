#include<iostream>
using namespace std;

float cal_si(int p, int t , int r=2)
{
     return (p*r*t)/100;
}
int main()
{
     float p, r, t, si;
     cout<<"Enter p=";
     cin>>p;
     cout<<"Enter r=";
     cin>>r;
     cout<<"Enter t=";
     cin>>t;

     cout<<cal_si(p,t,r)<<"\n";
     cout<<cal_si(p,t);
}
