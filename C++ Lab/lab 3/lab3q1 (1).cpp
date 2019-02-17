#include<iostream>
#include<iomanip>
//#define max 10
#define price 60
using namespace std;

class sugar {
	int sugarprice;
	float newprice;

	public:
	int	weight;
    void getdetails();
    void discount();
    void display();	
};
void sugar::getdetails() {

//weight=0;

	
//	cin>>weight;
	sugarprice=0;
	sugarprice=price*weight;

	
}

void sugar::discount(){
	newprice=0.00;
	if(weight>=2){
	
	newprice= sugarprice  -   (0.05*sugarprice);
}
else{
	newprice=sugarprice;
}

}

inline void sugar::display(){
	cout<<"\n";	
	cout<<"\nweight"<<setw(15)<<"price"<<setw(20)<<"Total-price"<<setw(39)<<"New price 5% discount for Weight>=2"<<setw(10);
	cout<<"\n";
	cout<<weight<<setw(18)<<price<<setw(18)<<sugarprice<<setw(22)<<newprice<<setw(5);
	cout<<endl;
}

int main(){	
sugar sug[4];
int i;
sug[0].weight=2;
sug[1].weight=1;
sug[2].weight=1;
sug[3].weight=5;
    for(i=0;i<4;i++){
//	cout<<"Enter the weight of sugar_"<<i+1<<" in Kg :";
	
	sug[i].getdetails();
	cout<<"\n";	
}

for(i=0;i<4;i++){
	
sug[i].discount();	
}

cout<<"\t\t\tThe Output is :\n";
for(i=0;i<4;i++){
	cout<<"\n----------------------------------------------------------------------\n";
	cout<<"\nsugar_"<<i+1<<endl;

	sug[i].display();
	
}
return 0;
}
