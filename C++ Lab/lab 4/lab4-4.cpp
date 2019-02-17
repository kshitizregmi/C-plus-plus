#include<iostream>
using namespace std;
int i=0;
void character_repeat(){
	cout<<"\nWith No arguments:\n\n";

	for(i=0;i<5;i++){
		cout<<"*";
		cout<<endl;
		
	}
}
void character_repeat(char a){
cout<<"\n\nWith one character arguments:\n";
for(i=0;i<7;i++){
	cout<<endl;
	cout<<a;
	}

}
	void character_repeat(char a,int b){
		 cout<<"\nWith one character  arguments and integer:\n";
		 for(i=0;i<b;i++){
		 cout<<endl;
		 cout<<a;
		}
		
	}

int main(){
	character_repeat();
	char a,b;
	int n;
	cout<<"Enter a character :";
	cin>>a;
	character_repeat(a);
	cout<<"\n\nEnter a character :";
	cin>>b;
	cout<<"Enter how many times you want to print Character you entered just now:";
	cin>>n;
	character_repeat(b,n);
	return 0;
	
}
