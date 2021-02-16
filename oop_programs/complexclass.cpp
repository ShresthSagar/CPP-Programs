#include<iostream>
#include<conio.h>
using namespace std;

class complex_no
{
     float re;
     float img;

public :
     complex_no()
     {
          re=0;
          img=0;
     }
     void display()
     {
          cout<<"Complex no. is : "<<re<<"+i("<<img<<")\n";
     }
     void addre(int c)
     {
          re+=c;
     }
     void addimg(int d)
     {
          img+=d;
     }
};

int main()
{
     char ch;
     complex_no cn;
     int a;
     int b;
     cn.display();
     do
          {
               cout<<"COMPLEX NUMBER CLASS\n";
               cout<<"1.Assign initial value\n";
               cout<<"2.Add/Subtract real number\n";
               cout<<"3,Add/Subtract imaginary number\n";
               cout<<"4.Display complex number\n";
               cout<<"Any other key to abort..\n";
               cin>>ch;

               if(ch=='1')
               {
                         complex_no cn;
               }
               else if(ch=='2')
               {

                         cout<<"enter a=";
                         cin>>a;
                         cn.addre(a);
               }
               else if(ch=='3')
               {
                         cout<<"enter b=";
                         cin>>b;
                         cn.addimg(b);
               }
               else if(ch=='4')
                    {
                         cn.display();
                    }

               else return 0;

          }
     while(1);
}
