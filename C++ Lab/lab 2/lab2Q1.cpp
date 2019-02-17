#include<iostream>
#include <iomanip>
#define max 10
using namespace std;

class employeeinfo{
	char name[100];
	char d,n,g,forum;
	int serviceyear,salary,sales;
		public:
		//	char forum,d,n,g;
		void getdetils(){
			
			cout<<"Enter name : ";
			cin>>name;
			cout<<endl;
			
				cout<<"Enter service year : ";
				cin>>serviceyear;
				
				
					cout<<endl;
						cout<<"Enter number of sales: ";
						cin>>sales;
						
							switch(sales)
	{
	 		case 0 ... 999:
			 forum='d';
			break;
			case 1000 ... 2999 :
			forum='n';
			break;
			case 3000 ... 10000:
			forum='g';
			break;
		    deafult:
			cout<<"please enter the right choice";
		    break;
	}
						
							
	cout<<"Enter salary : ";
	cin>>salary;
	cout<<endl;	
}


		void display(){


//	char g,n,d;
float new_salary;
if(forum=='g' && serviceyear>=5){
new_salary=((0.2)*salary)+salary;

}
else if(forum=='g' && serviceyear<5){
    new_salary=((0.1)*salary)+salary;
}
else if(forum=='n' && serviceyear>=5){
    new_salary=((0.1)*salary)+salary;
}
else if(forum=='n' &&serviceyear<5){
    new_salary=((0.05)*salary)+salary;

}
else{
    new_salary=salary;
}
		cout<<"\nName "<<setw(5)<<"Serviceyear"<<setw (10)<<"Sales"<<setw (12)<<"salary"<<setw (20)<<"grade"<<setw(10)<<"\tNew-salary";
		cout<<endl;
		cout<<name<<setw (5)<<serviceyear<<setw (17)<<sales<<setw (14)<<salary<<setw (18)<<forum<<setw (15)<< new_salary;	

}
	
	
		
		
		
};
int main(){
	employeeinfo emp[max];       
    int n,i;
     
    cout << "Enter total number of Employee: ";
    cin >> n;
     
    for(i=0;i< n; i++){
        cout << "\nEnter details of Employee " << i+1 << ":\n";
        emp[i].getdetils();
    }
     
    cout << endl;
     
    for(i=0;i< n; i++){
        cout << "\n\nDetails of Employee: " << (i+1) << ":\n";
        emp[i].display();
    }

return 0;	
}
