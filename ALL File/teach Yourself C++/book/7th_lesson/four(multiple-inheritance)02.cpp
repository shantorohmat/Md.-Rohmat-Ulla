#include<iostream>
using namespace std;

class Base
{

public:
    Base() { cout << "constructor of base class" << endl;}
    ~Base() {cout << "destructor of base class " << endl;  }
};

class Base_01
{

public:
    Base_01() { cout << "constructor of base_01 class " << endl ;}
    ~Base_01()  {cout << "destructor of base_01 class " << endl; }

};
class Derived: public Base, public Base_01
{
    int c;
public:
    Derived() { cout << "constructor of derived class " << endl ;}

   ~Derived()  {cout << "destructor of derived class " << endl; }
};

int main()
{
    Derived ob;


    return 0;
}

