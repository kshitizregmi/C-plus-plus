#include<iostream>
using namespace std;
/*Wap that creates a class Number with two attributes whole number 
integer part and decimal part. 
Accept 7 Number objects from the user.
Send the array of objects into a separate function using pointers
where the objects are arranged. The arrangement is done such that 
the objects are in ascending order according to the decimal part of the object. 
From the main function display the order.

*/
class number{
static int num;
int integer;
float decimal;
public:
number (){num=1;}
	int getinteger(){
		return integer;
	}
		int getdecimal(){
		return decimal;
	}

void getdata(){
	int i;
	i=1;
	cout<<"\nenter values index "<<num++<<":";
//	for(int i=0;i<7;i++){
	cout<<"\nEnter integer number: ";
	cin>>integer;
	cout<<"\nEnter decimal number: ";
	cin>>decimal;	
	}
 
 
};
/* void number::arrange(number *ob){
	//selection sort
	int temp;
for(int i=0; i<7; i++){
      for(int j=i+1; j<7; j++){
           if( ob[j].getdecimal()  < ob[i].getdecimal() )
	   {
               temp = ob[i];
               ob[i] = ob[j];
               ob[j]=temp;
           }
      }
  }	*/
void arrange(number *ob){
//void number::arrange(number *ob){
 number swap;
  int n=7;
for (int i = 0 ; i < ( n - 1 ); i++)
  {
    for (int j = 0 ; j < n - i - 1; j++)
    {
      if (ob[j].getdecimal() > ob[j+1].getdecimal()) /* For decreasing order use < */
      {
        swap = ob[j];
       ob[j]= ob[j+1];
        ob[j+1]= swap;
      }
    }
  }
	}


int number :: num=0;

int main(){
number a[7];

for(int i=0;i<7;i++){
	a[i].getdata();
	
}
for(int i=0;i<7;i++){
arrange(a);
}
cout <<"\n\n\t\t The sorted order is :\n";
for(int i=0;i<7;i++){
cout<<a[i].getinteger()<<"."<<a[i].getdecimal()<<endl;		
}
}
