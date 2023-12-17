#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    int i;
    base(int i) { this -> i = i; }
    virtual void fun()
    {
        cout << "Using base version of function :  ";
        cout << i << endl;
    }

};
class derived : public base
{
public:
    derived(int i ) : base(i) { }
    void fun()
    {
        cout << "Using derived version of function :  ";
        cout << i * i << endl;
    }
};
class derived01 : public base
{
public:
    derived01(int i) : base(i) { }
    void fun()
    {
        cout << " Using  derived 01 version of function :  ";
        cout << i+ i << endl;
    }
};

int main()
{
    base *p;

    base ob(10);

    derived oc(10);

    derived01 od(10);

     p  = &ob;

     p -> fun();

     p = &oc;

     p -> fun();

     p = &od ;

     p -> fun();

     return 0;
}



