#include<iostream>
using namespace std;
class student
{
    int a,b;
public:
    void set(int x)
    {
        a = x;
    }

    int get()
    {
        return a;
    }

     void set_b(int x)
    {
        b = x;
    }

    int get_b()
    {
        return b;
    }
};
int main()
{
    student s1;

    s1.set(120);

    s1.set_b(200);

    student* p;

    p = &s1;

    cout << "Value using object :" << s1.get() << endl;

    cout << "value using pointer :" << (*p).get() << endl;

    cout << "address of a pointer : " << (int)   p <<endl;

      cout << "Value using object :" << s1.get_b() << endl;

    cout << "value using pointer :" << (*p).get_b() << endl;

    cout << "address of a pointer : " << (int)   p <<endl;




    return 0;
}
