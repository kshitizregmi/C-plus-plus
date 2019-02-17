#include <iostream>
using namespace std;
 
#define MAX 10
 
class studentinfo
{
    private:
        char  name[30];
        int   rollNo;
        int marks[3];
        float   avg;
      
    public:
        
        void getDetails(void);
       
        void putDetails(void);
};

void studentinfo::getDetails(void){
    cout << "\nEnter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "\nEnter  marks:\n";
    for(int i=0;i<=2;i++){
    		
    if(i==0){
    	cout << "\nEnter  marks in OOP: ";
    		
	}
	    if(i==1){
    	cout << "\nEnter  marks in English:\n ";
    		
	}
	    if(i==2){
    	cout << "\nEnter  marks in Maths:\n ";
    		
	}			
    		
	cin >> marks[i];
}
avg=0.00;
for(int i=0;i<=2;i++){
	
    avg+=marks[i];   
}
avg=avg/3;
cout<<"Average="<<avg;
}

void studentinfo::putDetails () {

            int i;
             cout << "\nStudent details:\n";
             cout << "\nName: "<< name << "\nRoll Number: " << rollNo << "\nAverage: " << avg;
              //  cout <<"",name"<< name << ",RollNumber" << rollNo << ",Average" << avg";
              for(i=0;i<=2;i++){
              	if(i==0){
              			cout << "\nMarks in OOP:\n";
              cout<<marks[0];
				  }
              
              else if(i==1){
              		cout << "\nMarks in English:\n";
              		 cout<<marks[1];
			  }
              	else{
              			cout << "\nMarks in Maths:\n";
              			 cout<<marks[2];
				  }
              		
              	
			  }
    }
    

int main()
{
    studentinfo std[MAX];       
    int n,i;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(i=0;i< n; i++){
        cout << "\nEnter details of student " << i+1 << ":\n";
        std[i].getDetails();
    }
     
    cout << endl;
     
    for(i=0;i< n; i++){
        cout << "\n\nDetails of student: " << (i+1) << ":\n";
        std[i].putDetails();
    }
     
    return 0;
}

