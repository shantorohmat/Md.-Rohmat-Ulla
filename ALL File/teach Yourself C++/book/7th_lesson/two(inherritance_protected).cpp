#include <iostream>
using namespace std;

class Base
{
public:
    int a;

protected :
    int b;

public:
    int c ;

    Base(int n,int m) { a = n,b = m; }

    int get_a() {return a; }

    int get_b()  { return b;}
};
int main()

{
    Base ob(45,78);

    ob.c = 45;

    cout << ob.c  << endl << ob.get_a()  << endl << ob.get_b() << endl ;
}
