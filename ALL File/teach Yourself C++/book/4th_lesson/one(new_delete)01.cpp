#include <iostream>
using namespace std;


class base
{
    int i,j;
public:
    void sets(int i,int j){ this ->i = i,this ->j = j; }
    void show() { cout << i*j << endl; }
};
int main()
{
    base *p;

    p = new base;

    p -> sets(4,5);

    p -> show();

    delete p;

    return 0;

}
