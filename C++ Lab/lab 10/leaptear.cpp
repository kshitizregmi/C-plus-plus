#include<iostream>
using namespace std;
int main(){
    int year=1990;;
 int i;
 for(i=0;i<=10;i++){
    if ((year % 400) == 0 ||(year % 4) == 0)
    cout<<"\nLeap year "<<year;

    year++;
 }
 return 0;
 
}

