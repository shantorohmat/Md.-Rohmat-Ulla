#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    int a;
};
class derived : virtual public base
{
public:
    int b;
};
class derived01 : virtual public base
{
 public:
    int c;
};

class derived02 : public derived,public derived01
{
    public:

    int get() { return a*b*c; }

};
int main()
{
    derived02 ob;

    ob.a = 10;
    ob.b = 10;
    ob.c = 10;

    cout << ob.get() << endl;

}
