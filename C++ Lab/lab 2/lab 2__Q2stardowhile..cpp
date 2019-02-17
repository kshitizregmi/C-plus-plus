#include<iostream>
using namespace std;
int main()
{
	int i=1,j,k;
	do{
	         j=4;
	       do{
		 		j--;
		 		cout<< " ";
			 }while(j>=i); 
	         k=1;
			do{
		 		k++;
		 		cout<<"*";
	    	  }while(k<=(2*i-1)); 
	 i++;
     cout<<"\n";
	}while(i<=4);
	return 0;
}
