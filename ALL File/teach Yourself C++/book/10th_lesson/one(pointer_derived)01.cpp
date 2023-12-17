#include <iostream>
using namespace std;

class B
{
public:
    int b ;
     virtual void show()
    {
        cout << "B class : " << b << endl;
    }
};
class D : public B
{
public:
    int d;
    void show() { cout << "d class : " <<  b << endl; }

};

int main()

{
    B ob;
    B *p;

    p = &ob;
    p-> b = 40;
    p->show();

    D oc;


    p = &oc;
    p-> b = 468;
    p->show();

    return 0;


}

