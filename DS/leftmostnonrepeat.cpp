#include<iostream>

using namespace std;

struct track
{
    int prev = -1;
    int freq = 0;

}t[256];

void test()
{

    for(int i = 0 ; i<256; i++)
    {
        if(i==13)
        cout<<"i = "<< i <<"\t char = \n"<<char(i)<< "\t freq = "<<t[i].freq<<"\t prev = "<< t[i].prev<<"\n";

    }
}

void nonrepeat(string s)
{
    int i,j, ans=-1;

    for(i=0; i<s.length(); i++)
    {
        if(t[int(s[i])].freq == 0)
            {
                t[int(s[i])].prev = i;
                cout<<"entered\n";
            }

        t[int(s[i])].freq++;
    }


    for(j=0; j<256; j++)
    {
        if(t[j].freq == 1)
        {
            if(ans==-1)
                ans = t[j].prev;
            else
                ans = min(ans,t[j].prev);
        }
    }


    /*for(i=0; i<s.length(); i++)
    {
        if(t[int(s[i])].freq == 1)
        {
            ans = i;
            break;
        }
    }*/

    cout<<"Ans = "<<ans;
}

int main()
{

    string s = "geeksgeeks";
    nonrepeat(s);
    //test();

}
