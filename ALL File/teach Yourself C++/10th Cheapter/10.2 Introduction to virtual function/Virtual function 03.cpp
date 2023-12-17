#include <bits/stdc++.h>
#include <cstdlib>
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
        cout << "Using derived version of function : ";
        cout << i * i << endl;
    }
};
class derived01 : public base
{
public:
    derived01(int i) : base(i) { }
     void fun()
    {
        cout << "Using derived version of function : ";
        cout << i + i << endl;
    }

};

int main()
{
    base *p;


    derived oc(10);

    derived01 od(10);

    for(int i = 0,j; i < 10;i++)
    {
        j = rand();
        if((j%2))   p  = &oc;
        else   p  = &od;

           p -> fun();
    }
     return 0;
}




