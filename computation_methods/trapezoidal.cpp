#include<iostream>
#include<math.h>
using namespace std ;

double func (double &x)
{
     double y = 1/(1+(pow(x,2)));
     return y ;
}

int main()
{
     float a , b ;
     int n;
     double h = 0 ;
     double ans = 0 ;
     cout<<":: Integration of :- f(x) = 1/(1+x^2) by trapezoidal rule : \n";
     cout<<"Enter value of a : ";
     cin>> a;
     cout<<"Enter value of b : ";
     cin>>b;
     cout<<"Enter value of n : ";
     cin>>n;
     double x[n+1], y[n+1];
     h = (b-a)/n;
cout<<"\nh = "<<h<<"\n\n";
     for(int i=0 ; i<=n ; i++)
     {
          x[i] = a + i*h ;
          y[i] = func(x[i]);
cout<<"x"<<i<<"="<<x[i]<<" ";
cout<<"y"<<i<<"="<<y[i]<<"\n";
     }

          for(int i=1 ; i<n ; i++)
          {
               ans += 2*y[i] ;
          }

          ans = ans + y[0] + y[n] ;
          ans = (ans * h)/2 ;
cout<<"\n\"Answer = "<<ans<<"\"\n";
     return 0;
}
