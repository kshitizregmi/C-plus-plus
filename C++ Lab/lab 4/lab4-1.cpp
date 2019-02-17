#include<iostream>
 using namespace std;
int fibonacci(int n)
{
    if((n==1)||(n==2))
    {
        return 1;
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 int main(){
int n,i=1;
int x;
cout<<"Input the number of terms for fibonacci :";
cin>>n;
 while(i<=n){
x= fibonacci(i);
++i;
}
cout<<"\nFibonacci number at "<<n<<" th position is:"<<x;
return 0;
}
