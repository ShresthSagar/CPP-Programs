#include <iostream>
using namespace std;

void validateS(string s)
{
    char ch;
    bool dig=false, lcase=false, ucase=false;
    for(int i=0; i<s.length(); i++)
    {
        ch = s[i];
        if(isdigit(ch))
        {
            cout<<s[i]<<" digit\n";
            dig = true;
        }
        if(islower(ch))
        {
            cout<<s[i]<<" lower\n";
            lcase = true;
        }
        if(isupper(ch))
        {
            cout<<s[i]<<" upper\n";
            ucase = true;
        }
    }
    
    if(dig&&ucase&&lcase)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

int main() {
	//code
	int t;
	string s;
	cin>>t;
	while(t--)
	{
	    validateS(s);
	}

	return 0;
}