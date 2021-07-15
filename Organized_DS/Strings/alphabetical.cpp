#include<bits/stdc++.h>
using namespace std;

char ch[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void solve()
{
    int t; 
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=0, starter=0, prev=1, next=1;

    char a ='a';
    size_t found = s.find(a);
    
    if (found != string::npos)
    starter = found;
    else
    {
        cout<<"NO\n";
        continue; 
    }
    
    int size = s.length(); 
    if(size==1)
    {
        if(s[0]=='a')
        {
            cout<<"YES\n";
            flag=1;
        }
        else
        {
            cout<<"NO\n";
            flag=1;
        }
        
    }
    // cout<<"starter="<<starter<<"\n";
    prev = starter-1;
    next = starter+1;
        for(int i=1; i<min(26, size); i++)
        {
            if(ch[i]==s[next])
            {
                    // starter = starter+next;
                    next++;
                    // cout<<"next="<<next<<"\n";
            } 
            else if(ch[i]==s[prev])
            {
                    // starter = starter-prev;
                    prev--;
                    // cout<<"prev="<<prev<<"\n";
            }

            else{
                cout<<"NO\n";
                flag=1;
                break;
            }
        }

        if(flag==1)
        continue;
        cout<<"YES\n";
    }
}


int main()
{

    solve();

    return 0;
}