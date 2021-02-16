#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int A,B,C,D,i=1;
double f(double x)
{
     double y = A*(pow(x,3))+B*(pow(x,2))+C* x + D ;
     return y;
}

double newfun(double x0, double x1 )
{
double x2 ;
     while(1)
    {

     x2 = (x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
     cout<<i++<<"-approximate root = "<<x2<<"\n";
     cout<<"f("<<x2<<")="<<f(x2 )<<"\n";
     if(fabs(f(x2))<0.001)
          break;
     else
          {
               x0=x1;
               x1=x2;
               x2 = newfun(x0,x1);
               return x2;
          }

    }
return x2;
}

int signf(double x)
{
     int sign;
     double fx;

    fx=(A*(pow(x,3))+B*(pow(x,2))+C* x + D);
     if(fx<0)
          sign=0;
     else
          sign=1;

     return sign;
}


int main()
{
int sign0,sign1;
double x0=0,x1=1,x2=0,x,y,mid;
std :: cout<<"EQUATION  OF  FORM  :  Ax^3 + Bx^2 + Cx + D = 0\n";
std :: cout<<"\nEnter A :";
std :: cin>> A;
std :: cout<<"\nEnter B :";
std :: cin>> B;
std :: cout<<"\nEnter C :";
std :: cin>> C;
std :: cout<<"\nEnter D :";
std :: cin>> D;

while(true)
{

sign0 = signf(x0);
sign1 = signf(x1);

      if(sign0!=sign1)
      {
       x2=newfun(x0,x1);
        if(fabs(f(x2))<0.001)
          break;

      }
      else
          {
               x0++;
               x1=x0+1;
          }
}
     
}



