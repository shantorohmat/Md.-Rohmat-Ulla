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

void fun(myclass x)
{
    x.set_a(101);
}
int main()
{
    myclass ob1,ob2;
    ob1.set_a(5);
    ob2 = ob1;
    cout<< ob2.get_a()<< endl;
    fun(ob2);
   //b  cout << ob2.get_a() << endl;
    return 0;

}
