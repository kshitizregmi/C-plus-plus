#include <iostream>
using namespace std;
 
int main () {
   // Local variable declaration:
   int a = 10;

   // do loop execution to print number 10-19
   do {
      cout << "value of a: " << a << endl;
      a = a + 1;
   } while( a < 20 ); //exclude a==20
 
   return 0;
}
