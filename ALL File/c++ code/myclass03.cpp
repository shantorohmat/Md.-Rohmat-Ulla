#include<iostream>
using namespace std;

class student
{
    int age;
    double cgpa;

public :

  void setInfo(int x)
    {
         age = x;
    }
    int  getInfo()
    {
        return age;
    }

};

fun()
{
    student sp,bp;

    sp.setInfo(22);
    bp.setInfo(22);

    cout << sp.getInfo() << endl;
    cout << bp.getInfo() << endl;
}

int main()

{
    fun();


    return  0;



}
