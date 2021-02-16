#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     double act_val , approx_val , per_error , rel_error , abs_error ;
     cout<<"Enter actual value : ";
     cin>>act_val;
     cout<<"Enter approx value : ";
     cin>>approx_val;
     abs_error = fabs(act_val-approx_val);
     rel_error = abs_error/act_val;
     per_error = rel_error*100;
     cout<<"Absolute error = "<<abs_error<<"\n";
      cout<<"Relative error = "<<rel_error<<"\n";
      cout<<"Percentage error = "<<per_error<<"%\n";
     return 0;
}
