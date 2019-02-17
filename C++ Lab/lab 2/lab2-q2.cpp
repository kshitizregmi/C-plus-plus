#include <iostream>
using namespace std;
int main()
{
    int i, j,p=0;
    do{
	
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            cout<<i;
        }
        cout<<endl;
        p++;
    }
	}while(p<=4);

    return 0;
} 

