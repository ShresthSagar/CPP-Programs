#include<iostream>
using namespace std;

class base
{
     int data_base;
     public :
               void setdatabase(int a)
               {
                    cout<<"setdatabase() called from base class\n";
                    data_base = a;
               }

               virtual void showdatabase()
               {
                    cout<<"showdatabase() called from base class\t";
                    cout<<"Private data member of base class:"<<data_base<<"\t";
               }
};

class derived : public base
{
     int data_derived;

     public :
               void setdataderived(int x)
               {
                    data_derived = x ;
               }
               void showdataderived()
               {
                    cout<<"private data of derived class : "<<data_derived<<"\n";
               }

               void showdatabase()
               {
                    cout<<"Showdatabase() called from derived class(virtual function in base class)\n";
               }

               void setdatabase(int)
               {
                    cout<<"setdatabase() called from derived class \n";
               }

};

int main()
{
     derived d;
     base *b = &d ;
     b->setdatabase(5);
     b->showdatabase();
    return 0;
}
