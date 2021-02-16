#include<iostream>
using namespace std;

class base1
{
     int private_data;
     public :
               void setprivate(int a)
               {
                    private_data = a;
               }

               void showprivate()
               {
                    cout<<"Private data member of base1 class:"<<private_data<<"\n";
               }
};

class base2
{
     int data;
     public :
               void setdata(int x)
               {
                    data = x ;
               }
               void showdata()
               {
                    cout<<"private data of base2 class : "<<data<<"\n";
               }
};

class derived1 : public base1 , public base2
{
     int data1;

     public :
               void setdata1(int x)
               {
                    data1 = x ;
               }
               void showdata1()
               {
                    cout<<"private data of derived1 class : "<<data1<<"\n";
               }
};

class derived2 : public derived1
{
   int data2;

     public :
               void setdata2(int x)
               {
                    data2 = x ;
               }
               void showdata2()
               {
                    cout<<"private data of derived2 class : "<<data2<<"\n";
               }
};
int main()
{
     derived2 d;

     d.setprivate(20);
     d.showprivate();
     d.setdata(15);
     d.showdata();
     d.setdata1(10);
     d.showdata1();
     d.setdata2(5);
     d.showdata2();

    return 0;
}
