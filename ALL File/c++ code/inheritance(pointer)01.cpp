#include <iostream>
using namespace std;

class B
{
public:
    int b;

   virtual void showB()  { cout << "B derive : " << b << endl; }

};

class D: public B
{
public :
    int d;

    void showB()  { cout << "D derive : " << b << endl;}
};
class D1: public B
{
public :

    int d1;

    void showB() { cout << "D1 derive : " << b << endl; }
};


int main()
{
     B ob ;

    B *p;

    p = &ob;

    p -> b = 5;

    p -> showB();

    D od ;

    //D *p;

    p = &od;

    p -> b = 5;

    p -> showB();

    D1 od1 ;

    //D *p;

    p = &od1;

    p -> b = 5;

    p -> showB();

    return 0;
}
