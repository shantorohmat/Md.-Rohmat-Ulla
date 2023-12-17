#include<iostream>
using namespace std;
class student{
int a;
public:
   void  set(int x)
    {
        a = x;
    }
    int get()
    {
        return a;
    }
    friend void fun(student s1);

};

void fun(student s)
{
    s.a = 500;

    cout <<s.a << endl;

}
int main()
{
    student s1;

    s1.set(400);

    cout << s1.get() << endl;

    fun(s1);

    return 0;
}
