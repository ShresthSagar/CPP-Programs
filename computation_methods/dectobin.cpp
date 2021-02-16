#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int dec , i = 0 ;
     vector<int>bin ;
     bin.assign(5,0);
     cout<<"Enter decimal number : ";
     cin>>dec;
     while(dec)
     {
          bin [i] = dec%2;
          dec/=2;
          i++;
     }
i--;
cout<<"Binary = ";
   while(i>=0)
     cout<<bin[i--];

return 0 ;
}
