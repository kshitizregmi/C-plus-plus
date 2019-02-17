/*Create a class called Time 
that has a separate int member data for hours, minutes and seconds.
One constructor should initialize this data to 0 
whereas another constructor should initialize it to fixed values. 
Another member function should display it in 11:59:59 format. 
The final member function should add two object of type time passed as arguments. 
One main program should create two initialized time objects
and one that isn't initialized. 
Then it should add two initialized values together, 
leaving the result in this third object. 
This needs to be done in member function defined outside of the class.
Display the value in the main function.
*/
#include<iostream>
using namespace std;
class time {
	int hrs ,min ,sec;
	public:
		time(){
			hrs=0;min=0;sec=0;
			
		}
		time(int h ,int m,int s){
			hrs=h;
			min=m;
			sec=s;
		
		}
		void display(){
			cout<<hrs<<":"<<min<<":"<<sec;
		}
		time settime(time t1, time t2);
};

time time:: settime(time t1, time t2){
			time temp;
			temp.hrs = t1.hrs + t2.hrs;
			temp.min = t1.min + t2.min;
			temp.sec = t1.sec + t2.sec;
			while(temp.sec>=60){
				temp.min++;
				temp.sec=temp.sec-60;
			}

			while(temp.min>=60){
				temp.hrs++;
				temp.min=temp.min-60;
			}
			
			return temp;
}

int main(){
time t1(1,14,34),t2(1,45,6),t3;
	
	
	cout<< "first time: ";
	t1.display();

	cout<< "\nsecond time: ";
	t2.display();
	t3 = t3.settime(t1,t2);
	cout<< "\nTotal time: ";
	t3.display();

}
