#include <bits/stdc++.h>
using namespace std;

class base
{
    int a,b;

public:

    void set_ab(int a,int b) { this -> a = a; this ->b = b; }
    void get_ab(int &i,int &j) {i = a,j = b;  }

};

class derived : private base
{
    int x,y;

public:

    void set_xyab(int a,int b,int x,int y) { set_ab(a,b); this -> x = x;this -> y = y; }
    void get_xyab(int &i,int &j,int &q,int &r) { get_ab(i,j); q = x,r = y; }

};
int main()
{
    derived ob;

    ob.set_xyab(10,20,30,40);

    int x,y,z,w;

    ob.get_xyab(x,y,w,z);

    cout << x <<" " << y << " " << z << " " << w << endl;
}
