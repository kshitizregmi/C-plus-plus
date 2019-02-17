#include<iostream>
using namespace std;
class kilogram
{
	float kg;
	public:
		float getdata()
		{
		cout<<"Enter the kilograms :";
		cin>>kg;
		return kg;
		}
		kilogram()
		{
			cout<<"Kilogram Object Created\n";
		}
		
		void display()
		{
			cout<<"You entered "<<kg <<" kilogram "<<endl ;
            
		}
};
class gram
{
	float gm;
	public:
	
        gram():gm(0.00)
        {
          cout<<"Gram obj created "<<endl;
        }

	void display()
	{
		cout<<"\nIn Grams : " <<gm<<endl;
	}
	void operator =(kilogram k){
		gm=k.getdata();
		k.display();
		gm=gm*1000;
	}
};
int main()
{
kilogram k;
gram g;
g=k;
g.display();
return 0;
}
