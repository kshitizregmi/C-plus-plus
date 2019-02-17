#include <iostream>
using namespace std;
class obj
{
    private:
      int num;
    public:
     //  obj(): num(0) { }
void readData()
{
cout << "Enter a number :"<<endl;
cin >> num;
}
int getdata(){
return num;
}
		
obj compare(obj a1,obj a2,obj a3){
a1.readData();
a2.readData();
a3.readData();
        //	obj temp;
        	if(a1.getdata()>a2.getdata()&& a1.getdata()>a3.getdata()){
        		
        		return a1;
			}
			else if(a2.getdata()>a1.getdata() && a2.getdata()>a3.getdata()){
				return a2;
			}
			else{
				return a3;
			}
        	
		}
};
int main()
{
 obj d1, d2, d3,d4;

d4=d1.compare(d1, d2,d3);
   
   cout<<"Largest "<< d4.getdata();
   //d4.getdata();
    return 0;
}
