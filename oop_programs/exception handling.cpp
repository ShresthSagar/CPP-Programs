#include <iostream>
using namespace std;

int main()
{
   int x = 2;
   cout<<"        ::: Catching Exception for x = -1 :::"<<endl;
  while(x>=0)
  {
      cout<<"x = "<<x<<" ";
  x--;
   // Some code
   cout << "\nBefore try \n";
   try {
      cout << "Inside try \n";
      if (x < 0)
      {
         throw x;
         cout << "After throw \n";
      }
   }
   catch (int x ) {
        cout<<"x = "<<x<<endl;
      cout << "Exception Caught \n";
   }

   cout << "After catch \n";
  }
   return 0;
}


