#include<iostream>
using namespace std;
/*2.Write a program to create a abstract class Polygon with length and height as its data
 member. Make area() a pure virtual
function and redefine it in derived class triangle and rectangle to
 calculate the respective area.
 */

class polygon
{
	protected:
	float length ,height;
	public:
	 virtual void area ()=0;
	 virtual void get (int a, int b)
	 {
	 	length=a;height=b;
	 }
	
};
class triangle :public polygon
{
	public:
	void get(int l, int b)
	{
		length=l;height=b;
	}
	void area()
	{
		cout<<"Area ="<<0.5*length*height;
	}
	
};
class rectangle :public polygon
{
	public:
		void get(int l, int b)
	{
		length=l;height=b;
	}
	void area()
	{
		cout<<"Area ="<<length*height;
	}
	
	
};

int main()
{
	polygon *p1;
	triangle t1;
	p1=&t1;
	p1->get(3,5);
	p1->area();
	
	rectangle r1;
	p1=&r1;
	p1->get(3,5);
	p1->area();
	
}
