/*1.A book shop in Kathmandu valley sells books and DVD. Two classes Book and DVD are inherited from base class Media. The Media 
class has common data members such as title and publication. The class Book has data members such number_of_pages and that of DVD
has data members such as duration. Each class member has member functions such as readdata() amd showdata(). Write a program for 
modelling the class hierarchy for book shop and process objects of these classes using pointers to the base class.
*/
#include <iostream>
#include <string>
using namespace std;

class media{
	private:
		string title, publication;

	public:
		virtual void readdata(){
			cout <<endl<< "enter the title: "<<endl;
			cin >> title;
			cout << "enter publication: "<<endl;
			cin >> publication;
		}

	    virtual	void showdata(){
			cout <<endl<< "title: "<<title<<endl;
			cout  << "publication:"<< publication<<endl;
			
		}
};

class book: public media{
	private:
		int no_of_pages;
	public: 
		void readdata(){
			media::readdata();
			cout << "enter no of pages: "<<endl;
			cin >> no_of_pages;	
		}
		void showdata(){
		media::showdata();
        cout<<"No of pages:"<<no_of_pages;
		}
};

class dvd: public media{
	private:
		int duration;
		
	public: 
		void readdata(){
			media::readdata();
			cout << "enter duration: "<<endl;
			cin >> duration;
		}
        void showdata()
        {
            media::showdata();
            cout<<"Duration:"<<duration;
        }
};

int main(){
	media *md;
	book bk;
	dvd dv;
	md=new book;
	cout<<" Enter data for book"<<endl;
    md->readdata();
    cout<<"data for the book"<<endl;
	md->showdata();
	md=&dv;
	cout<<endl<<"Enter Data fot the dvd"<<endl;
	md->readdata();
	cout<<"Data fot the dvd"<<endl;
	md->showdata();
	return(0);
    
}
