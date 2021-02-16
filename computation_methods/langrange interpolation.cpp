#include<iostream>
using namespace std;

int main()
{
     int i, j, x, n=5;
     double y=1 ,ans=0;
     cout<<"     ::: Langrange's Interpolation Formula (Unequal Interval) ::: \n";
     cout<<"Enter number of terms : ";
     cin>>n;
     int xi[n],yi[n];

     for(i=0;i<n;i++)
     {
          cout<<"Enter values of x"<<i<<" : ";
          cin>>xi[i];
          cout<<"Enter values of y"<<i<<" : ";
          cin>>yi[i];

     }

     cout<<"Enter x : ";
     cin>>x;

     for(i=0;i<n;i++)
     {
          y=1;
          for(j=0;j<n;j++)
          {
               if(j==i) continue;
               y*=(x-xi[j]);

          }

          for(int k=0;k<n;k++)
          {
               if(k==i) continue;
               y/=(xi[i]-xi[k]);
          }
          y*=yi[i];
          ans+=y;
        //  cout<<y;
//cout<<"\n";
     }
cout<<"y("<<x<<") = "<<ans;
     return 0;
}
