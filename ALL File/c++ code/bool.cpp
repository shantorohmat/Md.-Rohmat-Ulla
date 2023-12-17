#include<iostream>
using namespace std;
class student
{
    int a;
public:
    void set_a(int x)
    {
        a = x;
    }
    int get_a(   )
    {
        return a ;
    }
    friend void fun(student s1);
};
void fun(student s1)
{
    s1.a = 5000;
    cout << s1.a << endl;
}
int main()
{
    student s1;
    s1.set_a(499);
    cout << s1.get_a() << endl;
    fun(s1);
    return 0;
}
