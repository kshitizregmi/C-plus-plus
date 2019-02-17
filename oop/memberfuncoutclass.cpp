// C++ program to demonstrate  
// accessing of data members  
  
#include <iostream> 
using namespace std; 
class alpha 
{ 
    private:
    	string name; 
    // Access specifier 
    public: 
  
 
    void printname();
    void get();
    
}; 
  
    // Member Functions() 
   void alpha ::  printname() 
    { 
       cout << "My name is : " << name; 
    } 
    void alpha ::  get(){
    	name="Kshitiz";
	}



  
int main() { 
  
    // Declare an object of class geeks 
    alpha obj1; 
  
    // accessing data member 
    obj1.get() ;
  
    // accessing member function 
    obj1.printname(); 
    return 0; 
} 
