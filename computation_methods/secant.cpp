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

void secfun(double x0, double x1 )
{

     while(1)
    {

     double x2 = (x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
     cout<<i++<<"-approximate root = "<<x2<<"\n";
     cout<<"f("<<x2<<")="<<f(x2 )<<"\n";
     if(fabs(f(x2))<0.001)
          break;
     else
          {
               x0=x1;
               x1=x2;
               secfun(x0,x1);
          }

    }
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
double x0=0,x1=1,x,y,mid;
std :: cout<<"EQUATION  OF  FORM  :  Ax^3 + Bx^2 + Cx + D = 0\n";
std :: cout<<"Enter A :";
std :: cin>> A;
std :: cout<<"Enter B :";
std :: cin>> B;
std :: cout<<"Enter C :";
std :: cin>> C;
std :: cout<<"Enter D :";
std :: cin>> D;

while(1)
{

sign0 = signf(x0);
sign1 = signf(x1);

      if(sign0!=sign1)
      {
          // cout<<x0<<" "<<x1;
          break;
      }
      else
          {
               x0++;
               x1=x0+1;
          }

}

secfun(x0,x1);
}



