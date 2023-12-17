#include <iostreaM>
using namespace std;

class B
{
public:
    int i;
    B(int x) {i = x;}
    virtual  void show() { cout << "b version : "  << i << endl; }

};

class D1:public B
{public:

    int j;
    D1(int x) : B(x) { }
    void show() { cout << "D1 version : " << i*i << endl;  }
};

class D2 : public B
{
public:
    int k;
    D2(int x)  : B(x) { }
    void show() { cout << "d2 version : " << i + 5 << endl; }
};

int main()
{
    B *p;
    B ob(10);
    D1 oc(5);
    D2 od(7);

    p = &ob;
    p -> show();

    p = &oc;
    p -> show();

    p = &od;
    p -> show();

    return 0;
}

