#include<iostream>
#include<math.h>
using namespace std;

double power(int m, int n)
{
     cout<<"Int m\n";
     return pow(m,n);
}
double power(double m, int n)
{
     cout<<"Double m\n";
     return pow(m,n);
}

int main()
{

     int m,n;
     double num;
     cin>>m>>n;
     cout<<power(m,n)<<"\n";
     cin>>num;
     cout<<power(num,n);
}
