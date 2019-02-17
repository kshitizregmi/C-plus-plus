#include<iostream>
using namespace std;
int large_distance(int &a,int &b);
int main(){
	int foot=0,inch=0;
	int left;
	cout<<"Enter the foot:"<<endl;
	cin>>foot;
	cout<<"Enter the inch:"<<endl;
	cin>>inch;
	int d = large_distance(foot,inch);

	if(d==0){
		cout<<"Larger is :"<<inch<<" inch"<<endl;
	}
	else if (d==1){
		foot=foot/12;
		cout<<"Larger is :"<<foot<< "foot"<<endl;
	}
	else{
		cout<<"They are equal :"<<endl;
		
	}
	return 0;
}
	
	

int large_distance(int &a,int &b){
	int c=0;
	a= a*12;
	if(a>b){
		return 1;
	}
	else if (b>a){
	
		return 0;
	}
	else{
		return 2;
	}
}
