#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "geeksforgeeks";
    int charint[256], ans=999;
    for(int i=0; i<256; i++){
        charint[i] = -1;
    }

    for(int i=0; i<s.length(); i++){
        
        if(charint[s[i]]==-1)
        {
            charint[s[i]] = i;
        }
        else
        {
            ans = min(ans, charint[s[i]]);
        }
        
    }
        cout<<endl<<ans;

    return 0;
}