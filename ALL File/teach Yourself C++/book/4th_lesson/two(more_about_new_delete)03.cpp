#include <iostream>
using namespace std;

class base
{
    int i,j;
public:
    void sets(int i,int j)  {this -> i = i,this -> j = j; }
    void show() {cout << i*j << endl; }
};

int main()
{
    base *p;

    p = new base[10];

    int m = 4,n = 10;

    for(int i = 0;i < 10;i++,m++)
    {
        p[i].sets(m,n);
    }

    for(int i = 0;i < 10;i++)
    {
        cout << "p[ "<< i << "] : " <<  '\t';
        p[i].show();
    }
    delete []p;

    return 0;
}
