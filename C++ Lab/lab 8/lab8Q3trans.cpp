#include<iostream>
using namespace std;
class matrix
{
	float a[10][10];
	int r,c,i,j;
	public:
void get (){
	cout<<"Enter no of row and col :";
	cin>>r>>c;
}
void set(){
	cout<<"Enter matrix :";
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
		cin>>a[i][j];
		
	}
	}
}
	
void display()
{
	cout<<"\nYour matrix :\n";
	for(i=0;i<r;i++){
		cout<<endl;
		for(j=0;j<c;j++){
			cout<<a[i][j]<<"\t";
		}
		
	}
}
friend void transpose(matrix m1);


};
void transpose (matrix m1)
{
	cout<<"\nYour matrix Output:\n";
	
	for(m1.i=0;m1.i<m1.c;m1.i++){
	
	cout<<"\n";
	for(m1.j=0;m1.j<m1.r;m1.j++){
	
	
		cout<<m1.a[m1.j][m1.i]<<"  ";
		
	}

	
	
	
	
}
}
int main()
{
	
	matrix m;
	m.get();
	m.set();
	m.display();
	transpose(m);
    return 0;    
}

