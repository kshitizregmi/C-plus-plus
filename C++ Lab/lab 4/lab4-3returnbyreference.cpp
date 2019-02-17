#include <iostream>
using namespace std;
int num;//global variable 
/*
return type of function test() is int&
test() cannot return a local variable from this function.
Ordinary function returns value but this function doesn't
Hence, you cannot return a constant from the function.
*/
int& test()
{ 
return num; 
}
int main()
{
test() = 10;
cout << num;
return 0;
}
