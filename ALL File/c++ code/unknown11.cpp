#include<iostream>
using namespace std;
class myclass
{
    int a;
public:
    myclass(int x)
    {
        a = x;
        cout << "const...ful." << endl;
    }
    ~myclass()
    {
        cout << a << " dest...." << endl;
    }
    myclass()
    {
        cout << a << " " << "const...blank" << endl;
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

    ob1.set_a(5);
    ob2.set_a(11);
    //myclass ob4;
    fun();
    return 0;
}
/*

int main()
{
    myclass ob(3);
    myclass ob1(6);
    myclass ob4();
    fun();
    return 0;
}*/

