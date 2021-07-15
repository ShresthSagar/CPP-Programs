#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "zgeeksforgeeks";
    int count[256], ans = 999;
for(int i=0; i < 256; i++)
    {
        count[i]=-1;
        //ans = min(ans, count[i]);
    }
    for(int i = 0; i < s.length(); i++)
    {
        
        if(count[s[i]] == -1)
        {
            count[s[i]] = i;
            // cout<<s[i]<<" "<<count[s[i]]<<"\n";
        }
        else
        {
            count[s[i]]=-2;
            // cout<<"else "<<s[i]<<" "<<count[s[i]]<<"\n";
        }
        
    }
    for(int i=0; i < 256; i++)
    {
        // cout<<i<<" "<<count[i]<<"\n";
        if(count[i]>-1)
        ans = min(ans, count[i]);
    }

    cout<<s[ans];
    return 0;
}