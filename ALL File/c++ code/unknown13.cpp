//passing object to function
#include<iostream>
using namespace std;
//int fun(student x);
class student
{
    int a;
public:

    student (int x)
    {
        a = x;

    }
    int get_a()
    {
        return a;
    }

};
int fun(student x)
{

  return x.get_a()* x.get_a();
  // cout << x.get_a() << endl;
}
int main()
{
    student sp(5);

    cout << sp.get_a() << endl;
    cout << fun(sp)<<endl;
    cout << sp.get_a() << endl;
}
