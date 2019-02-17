#include <iostream>
using namespace std;
 
// function declaration
float mean(float num1, float num2); //Returns float value
 
int main () {
   // local variable declaration:
   float a,b;
   cout<<"Enter 2 num to calculate mean : \n";
   cin>>a>>b;
   float ret;
 
   // calling a function to get mean value.
   ret = mean(a, b);
   cout << "Mean value is : " << ret << endl;
 
   return 0;
}
 
// function returning the mean between two numbers
float mean(float num1, float num2) {
   // local variable declaration
   float result;
 
   result=(num1+num2)/2;
 
   return result; 
}
