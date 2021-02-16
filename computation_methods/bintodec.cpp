#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     int i =0 ;
     long long int binary ;
     long int dec=0;
     cout<<"Enter a binary number : ";
     cin>>binary;
     while(binary)
     {
          dec = dec + pow(2,i++)*(binary%10);
          binary/=10;
     }
     cout<<"Decimal  = "<<dec;
     return 0 ;
}
