#include <iostream>	

using namespace std;
		
int main()                            
{
  int age;                            
  
  cout<<"Please input your age: ";    // Asks for age
  cin>> age;                          // The input is put in age
                      
  if ( age < 35 ) {                  
     cout<<"You are  young!\n"; 
  }
  else if ( age <= 60 ) {            
     cout<<"You are old\n";           
  }
  else {
    cout<<"You are really old\n";     
  }

}
