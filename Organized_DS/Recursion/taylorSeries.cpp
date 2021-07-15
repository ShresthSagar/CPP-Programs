#include<bits/stdc++.h>
using namespace std;

double calex(int n, int x) 
{
    if(n==0) return 1;

    static int xn = 1;
    static int i = 1;
    static int fact = 1;
    

    double val = calex(n-1, x);
    cout<<"val = "<<val<<endl;
    xn = xn*x;
    fact = fact*i; // can also use fact*n 
    i++;
    cout<<"xn/fact = "<<xn/double(fact)<<endl;
    // cout<<"xn = "<<xn<<" fact = "<<fact<<" i= "<<in<<"\n";
    double ans = val + xn/double(fact);
    return ans;
}

double calexHorner(int n, int x) 
{
    static double S = 1;

    if(n==0) return S;
    S = 1 + x/double(n)*S;
    return calexHorner(n-1,x);
}

int main()
{
    int n = 7; 
    int x = 1;
    int i = 1;
    cout<< double(calexHorner(n,x));
    return 0;
}