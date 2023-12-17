#include <iostream>
using namespace std;
class print
{


public :
    void print_c(char c,int n)
    {
        cout << c << " " << n << endl;
    }
    void print_n(int n,char c)
    {
        cout << n << " " << c << endl;
    }

};
int main()
{
    print ob;
    ob.print_c('c',10);
    ob.print_n(10,'c');
}
