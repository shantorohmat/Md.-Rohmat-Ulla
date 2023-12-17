#include <bits/stdc++.h>
using namespace std;

class base
{
protected:
    int a,b;
public:
    void set(int a,int b)  { this -> a = a; this -> b = b; }

};
class derived : protected base
{
    int c;
public:
    void setc(int c,int b,int a) { this -> c = c; this ->a = a;this -> b = b; }

    void show() { cout << a << " " << b <<" " << c << endl; }

};

int main()
{
    derived ob;
    //base oc;
    //oc.set(1020,3025);

   // ob.set(10,20);
    ob.setc(85,25,36);
    ob.show();

}

