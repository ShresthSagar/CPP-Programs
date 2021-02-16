#include<iostream>
#include<vector>
#include<string>
using namespace std;

void vectorfunc()
{

     vector<int>v1;
     int val;
     vector<int>::iterator it;
     for(int i=0; i<5;i++)
          v1.push_back(i);
     cout<<"size of vector using size function of stl = "<<v1.size()<<"\n";

     for(it=v1.begin();it!=v1.end();it++)
          cout<<*it<<" ";
          cout<<"\nEnter value to insert at end : ";
          cin>>val;
          v1.push_back(val);

          cout<<"After inserting at end the vector is :"<<"\n";
 for(it=v1.begin();it!=v1.end();it++)
          cout<<*it<<" ";
           cout<<"\nDeleting Last Element Inserted:\n";
            v1.pop_back();
            for(it=v1.begin();it!=v1.end();it++)
          cout<<*it<<" ";


}

void stringfunc()
{
     char ch;
     string st,st2;
     cout<<"Enter a string :";
     cin>>st;
     cout<<"Length of string using length() function = ";
     cout<<st.length();
     cout<<"\nEnter a character to insert at the end of string : ";
     cin>>ch;
     st.push_back(ch);
     cout<<"After pushback , the string is : "<<st;
     cout<<"\nEnter another string : ";
     cin>>st2;
     cout<<"After appending "<<st<<" and "<<st2<<" : ";
     cout<<st+st2;

}


int main()
{
char ch ;
     do
     {
       //   clrscr();

     cout<<"\n....Implementing STL of c++.... "<<"\n";
     cout<<"1. Vector\n";
     cout<<"2. String\n";
     cout<<"Enter your choice : ";
     cin>>ch;

     if(ch=='1')
          vectorfunc();
     else if(ch=='2')
          stringfunc();
     else
     {
          cout<<"Wrong choice...Aborting";
          return 0;
     }

     }while(1);
     return 0;
}
