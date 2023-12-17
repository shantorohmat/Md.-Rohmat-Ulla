#include <iostream>
using namespace std;

class base
{
    int i,j;
public:
    base(int i,int j) { this ->i = i,this -> j = j; }

    void show() { cout << i * j << endl; }
};
int main()
{
    base *p;

    p = new base(7,8);

    p ->show();

    delete p;

    return 0;
}
