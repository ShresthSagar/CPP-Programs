#include<iostream>
#include<conio.h>
using namespace std;


void subsets1(string s, int index=0, string newstr = "")
{
    if(index == s.length())
    {
        //return;
        cout<<newstr<<"\n";
        return;
    }
    //cout<<newstr<<"\n";
    subsets1(s, index+1, newstr);
    subsets1(s, index+1, newstr+s[index]);
}



void subsets2(string str, int index=0, string newstr = "")
{
    if(index==str.length())
    {
        cout<<"\""<<newstr<<"\" ";
        return;

    }
    subsets2(str, index+1, newstr);
    subsets2(str, index+1, newstr+str[index]);
}

int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int len = str.length();
    //cout<<"len = "<<len<<"\n";
    subsets2(str);
    return 0;
}

