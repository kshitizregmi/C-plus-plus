#include<iostream>
using namespace std;
class collage{
	protected:
		char name[15];
		int id;
};
class data:public collage{
	float rank;
	public:
		void getdata()
		{
			cout<<"\nEnter collagename  and collage id:";
			cin>>name>>id;
			if(id<=0)
				throw collage();
			cout<<"\nEnter the collage rank:";
			cin>>rank;
			if(rank<=0)
				throw data();
		}
		void show()
		{
			cout<<"\nName: "<<name<<"\nId: "<<id<<endl;
			cout<<"\Rank: "<<rank<<endl;
		}
};
int main()
{
	try{
		data x;
		x.getdata();
		x.show();
	}
	catch(data){
		cout<<"\nInvalid  rank";
	}
	catch(collage){
		cout<<"\nInvalid id";
	}
	
}
