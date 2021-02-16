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

class derived : public base1 , public base2
{
     int data1;

     public :
               void setdata1(int x)
               {
                    data1 = x ;
               }
               void showdata1()
               {
                    cout<<"private data of derived class : "<<data1<<"\n";
               }
};

int main()
{
     derived d;

     d.setprivate(20);
     d.showprivate();
     d.setdata(10);
     d.showdata();
     d.setdata1(5);
     d.showdata1();

    return 0;
}
