#include<iostream>
using namespace std;

class b
{
private:
    int a;
protected:
    int b;
public:
    int c;
};

class d:public b
{
    int x;//a(s)
protected:
    int y;
public:
    int z;

    void fun()
    {

        b = 20;
        c = 40;

        //cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};

class e:protected d
{

};



int main()
(
 b ob;

 ob.a = 10;
 ob.b = 20;
 ob.c = 90;

 //cout << ob.a<< endl;
 cout << ob.b<< endl;
 cout << ob.c<< endl;

}
