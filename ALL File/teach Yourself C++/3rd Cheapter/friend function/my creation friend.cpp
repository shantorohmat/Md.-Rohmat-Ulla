#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a;

public:

    shanto(int a) {  this -> a = a;}

    int show() {cout << "Value of a : " << a <<endl; }

    friend void fun(shanto s);
};

void fun(shanto s)
{
    s.a = 100 + s.a  ;

    cout <<"dhs: " <<  s.a << endl;

}

int main()
{
    shanto ob(10);

    ob.show() ;

     fun(ob);

    return 0;
}

