#include<iostream>
#include<cmath>
int main()
{
	float a,b,c,x1,x2,ch;
std::cout<<"enter the coff of x square :";
std::cin>>a;
std::cout<<"enter the coff of x :";
std::cin>>b;
std::cout<<"enter the constant :";
std::cin>>c;
 
 ch=b*b-4*a*c;
if(ch==0){
	x1=(-b)/(2*a);
	std::cout<<"Equal Root = "<<x1;
}
else if(ch<0){
	std::cout<<"\n";
	std::cout << "x1 = "<<-b/(2 * a)<<"+"<<sqrt(-ch) / (2 * a)<<"i";;
	//std::cout <<
	std::cout<<"\n";
    std::cout << "x1 = "<<-b/(2 * a)<<"-"<<sqrt(-ch) / (2 * a)<<"i";;
}
else{
		std::cout<<"\n";
		std::cout << "x1 = "<<(-b + sqrt(ch)) / (2 * a);
		std::cout<<"\n";
      	std::cout << "x2 = "<<(-b - sqrt(ch)) / (2 * a);
	
}
return 0;

}
