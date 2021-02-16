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
     cout<<":: Integration of :- f(x) = 1/(1+x^2) by Simpson 1/3 rule : \n";
     cout<<"Enter value of a : ";
     cin>> a;
     cout<<"Enter value of b : ";
     cin>>b;
     cout<<"Enter value of n (n must be even): ";
     cin>>n;

     if(n%2!=0)
     {
          cout<<"n is odd. Aborting...";
          return 0 ;
     }

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
               if(i%2==0)
                    ans += 2*y[i] ;
               else
                    ans += 4*y[i];
          }

          ans = ans + y[0] + y[n] ;
          ans = (ans * h)/3 ;
cout<<"\n\"Answer = "<<ans<<"\"\n";
     return 0;
}
