#include<iostream>
using namespace std;
class student{
    int a;
public:
    void set_a(int x)
    {
        a = x;
    }
    int get_a()
    {
        return a;
    }

};
int main()
{
    student sp;
    sp.set_a(10);
    student* p;
    p = & sp;
    cout << (*p).get_a() << endl;


}
