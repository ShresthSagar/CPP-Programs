#include<iostream>
using namespace std;
//multilevel inheritance code
class base
{
     int private_data;
     public :
               void setprivate(int a)
               {
                    private_data = a;
               }

               void showprivate()
               {
                    cout<<"Private data member of base class:"<<private_data<<"\n";
               }
};

class intermediate : public base
{
     int data;

     public :
               void setdata(int x)
               {
                    data = x ;
               }
               void showdata()
               {
                    cout<<"private data of intermediate class : "<<data<<"\n";
               }
};
class derived : public intermediate
{
     int data2;

     public :
               void setdata2(int x)
               {
                    data2 = x ;
               }
               void showdata2()
               {
                    cout<<"private data of derived class : "<<data2<<"\n";
               }
};
//driver function
int main()
{
     derived d;

     d.setprivate(20);
     d.showprivate();
     d.setdata(10);
     d.showdata();
     d.setdata2(5);
     d.showdata2();

    return 0;
}
