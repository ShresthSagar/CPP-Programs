#include<bits/stdc++.h>
using namespace std;

void matchNaive(string str, string pat)
{
    int i,j;
    int slen=str.length(), plen=pat.length();
    for(i=0; i<slen-plen+1; )
    {
        for(j=0; j<plen; j++)
        {
            if(str[i+j]!=pat[j])
            break;
        }
        if(j==plen) 
        {
            cout<<"Pattern Matched at index: "<<i<<"\n";
        }
        //optimized naive algo
        if(j==0) 
            i++;   
        else
            i+=j;
        
    }
}

int patHash(string str, int len )
{
    int hash=0, modulus = 17;
    for(int i=0; i< len; i++)
    {
        // cout<<int(str[i])<<"\n";
        hash += int(str[i]);
    }
    // cout<<"\n"<<hash<<"\n";
return hash%modulus;
}

void rabinKarp(string str, string pat){
    int plen, slen;
    int hashP = patHash(pat, plen);
    int strHash = patHash(str, plen);

    for(int i=0; i<slen-plen+1; i++)
    {
        //if hash matches then individual match
    }

}

int main()
{
    string str = "ABAABABAABA";
    string pattern = "ABA";
    // matchNaive(str, pattern);
    rabinKarp(str, pattern);
    return 0;
}