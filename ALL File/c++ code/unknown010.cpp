#include<iostream>
using namespace std;
class myclass
{
    int a;
public:
    myclass()
    {
        cout << "const...." << endl;
    }
    ~myclass()
    {
        cout << a << " dest...." << endl;
    }
    void set_a(int x ) { a = x; }
    int get_a(){ return a; }

};

void fun()
{

    myclass ob3;
    ob3.set_a(550);
}
int main()
{
    myclass ob1,ob2;

    fun();

    ob1.set_a(5);
    ob2.set_a(11);
    return 0;
}

