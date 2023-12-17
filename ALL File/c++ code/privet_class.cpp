#include<iostream>
using namespace std;
class student
{
    int a;
public :
    void set_fun(int x)
    {
    a = x;
    }
    int get_fun()
    {
        return a;
    }
};
int main()
{
    student sp,bp;
    sp.set_fun(100);
    bp.set_fun(200);

    cout << sp.get_fun() << endl << bp.get_fun() << endl;
    return 0;
}

