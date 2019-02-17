#include <iostream>
using namespace std;
 
int main ()
{
   int i = 0;
   
   while(i < 3) //Run 3 time
   {
       int j = 0;
       while(j < 5) //Run 5 time (0-4)
       {
           cout << "i = " << i << " and j = " << j << endl;
           j++;
       }
       i++;       
   }
   return 0;
}
