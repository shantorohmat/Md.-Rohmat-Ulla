#include<iostream>
using namespace std;

class student
{
    int a;
public:
    student();
    ~student();
    void show();
};

student :: student ()
{
    cout <<" constructor....."<< endl;

    a = 10;
    //cout << a <<endl;
}
student ::~student()
{
    cout << "destructor...." <<endl;
}
void student :: show()
{
    cout << a << endl;
}

int main()
{
    student sp;
    sp.show();

    return  0;
}
