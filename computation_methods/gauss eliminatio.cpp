#include<iostream>
using namespace std;

int main()
{
     int i,j;
     float num,x,y,z;
     float aug[3][4]={1,2,3,6,2,-1,4,4,5,2,-4,3};
     cout<<"System of Equations of the form : ax + by + cz = d \n";
     cout<<"enter a, b, c and d for the 3 equations (augmented matrix) :\n";
     for(i=0;i<3;i++)
     {
          for(j=0;j<4;j++)
          cin>>aug[i][j];
     }


     for(i=1;i<3;i++)
     {
          num=aug[i][0];
          for(j=0;j<4;j++)
          {
               aug[i][j]=aug[i][j]-(aug[0][j]*num)/aug[0][0];   //aug[1][0] and aug[2][0]=0
          }
     }

     cout<<"\n After step 1 : -\n";

      for(i=0;i<3;i++)
          {
               for(j=0;j<4;j++)
                    cout<<aug[i][j]<<"  ";
          cout<<"\n";
          }
cout<<"\n After step 2 :-\n";
     num = aug[2][1];
     for(j=0;j<4;j++)
     {
          aug[2][j] = aug[2][j] - (num*aug[1][j])/aug[1][1];
     }

          for(i=0;i<3;i++)
          {
               for(j=0;j<4;j++)
                    cout<<aug[i][j]<<"  ";
          cout<<"\n";
          }
cout<<"\n";
          z=aug[2][3]/aug[2][2];
          y=(aug[1][3]-(z*aug[1][2]))/aug[1][1];
          x=(aug[0][3]-aug[0][1]*y-aug[0][2]*z)/aug[0][0];

          cout<<"x = "<<x<<"\n";
          cout<<"y = "<<y<<"\n";
          cout<<"z = "<<z<<"\n";

     return 0 ;
}
