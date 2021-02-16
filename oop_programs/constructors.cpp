#include<iostream>
#include<string>
using namespace std;

class student
//name of students
{
     char name[20];
     int roll;
     int marks;
public:
     student()
     {
          //strcpy(name,"sagar");
          cout<<"name"<<"\n";
     }
     student(int rno)
     {
          roll=rno;
          cout<<"roll num="<<roll<<"\n";
     }
      student(int rno,int num)
     {
          roll=rno;
          marks=num;
          cout<<"roll num="<<roll<<"\n"<<"marks="<<marks;
     }
};
int main()
{
     student s1;
     student s2(10);
     student s3(10,90);
     student s4 = s3;
     return 0;
}
