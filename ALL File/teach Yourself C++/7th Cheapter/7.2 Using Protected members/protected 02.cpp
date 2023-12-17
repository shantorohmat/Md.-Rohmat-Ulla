#include <bits/stdc++.h>
using namespace std;

class base
{
protected:
    int a,b;///protected member of derived class

public:

    void setab(int a,int b) { this -> a = a; this -> b = b; }

};
class derived : public base
{
    int c;
    ///protected: int a,b;

public:

    void setc(int n) { c = n; }

    void show() { cout << a<< " " << b << " " <<c << endl; }
};

int main()
{
    derived ob;

    ob.setab(10,20);
    ob.setc(200);

    ob.show() ;

    return 0;
}





