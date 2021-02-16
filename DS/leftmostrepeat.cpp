#include<iostream>

using namespace std;


struct track
{
    int prev=-1;
    int freq=0;

}tr[256];


void leftmost2(string s)
{
    int len = s.length();
    int i, j, res = 99999;

    for(i=0; i<len; i++)
    {
        if(tr[int(s[i])].freq==0)
        {
            tr[int(s[i])].freq++;
            tr[int(s[i])].prev = i;
        }
        else
            res = min(tr[int(s[i])].prev, res);

    }
    if(res>=len)
        res=-1;
    cout<<"Occurrence = "<<res<<"\n";
}


void leftmost1(string s)
{
    int len = s.length();
    int i, j, res = 99999;
    int ch[256] = {0};

    for(i=len-1; i>=0; i--)
    {
        if(ch[int(s[i])]!=0)
        {
            if(res>=i)
                res=i;
        }
        else
            ch[int(s[i])]++;

    }
    if(res>=len)
        res=-1;
    cout<<"\noccurrence = "<<res;
}



int main(){

    string s;
    cout<<"Enter a string: ";
    //cin>>s;
    s = "heilloworld";
    leftmost2(s);

return 0;
}
