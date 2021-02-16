#include<iostream>
using namespace std;

void swapref(int &a, int &b)
{
cout<<"\nSwapping by Call by Reference :\n";
     int temp = a;
     a = b;
     b = temp;
}
void swapval(int a, int b)
{
cout<<"\nSwapping by Call by Value :\n";
     int temp = a;
     a = b;
     b = a;
}

int main()
     cout<<"\nCall_by_value_c++_program";
{
     int a, b ;
     cout<<"Enter a=";
     cin>>a;
     cout<<"Enter b=";
     cin>>b;
     swapval(a,b);
     cout<<"a = "<<a;
     cout<<"\nb = "<<b<<"\n";
     swapref(a,b);
     cout<<"a = "<<a;
     cout<<"\nb = "<<b<<"\n";
}
