#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float p,t,r,n,a;
	cout<<"Enter the principle :";
	cin>>p;
	cout<<"\nEnter the rate :";
	cin>>r;
	r=r/100;
	cout<<"\nEnter the time in years:";
	cin>>t;
	cout<<"\nThe number of years the money is invested ";
	cin>>n;
	t=n*t;
	a= (1 + (r/n));
	a=pow(a,t);
	a=p*a;
	a=a-p;
	cout<<"The compound intrest is :"<<a;
	return 0;
}
