// Write  a C++ code to find out the prime number between 2000 and 2050
#include <iostream>

using namespace std;

int main() {
	int low, high, i, flag;
    cout<<"Enter the intervals between which prime numbers are to be found: ";
    cin>>low>>high;
	cout<<"Prime numbers between "<<low<<" and "<<high<<" are: ";

    while (low < high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }

    return 0;
}
