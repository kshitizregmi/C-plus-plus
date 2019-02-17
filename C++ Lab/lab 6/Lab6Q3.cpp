#include<iostream>
using namespace std;
 
class load
{
    private:
       static int n;
         
    public:
        //function to get number
        void getNum(int x)
        {
            n=x;
        }
        //function to display number
        void dispNum(void)
        {
            cout << "value of n is: " << n;
        }
        //unary - operator overloading
       friend load operator - (load l)
        {
            l.n=-n;
        }
};
int load::n=0;

int main()
{
    load num;
    num.getNum(10);
    -num;
    num.dispNum();
    cout << endl;
    return 0;
     
}
