#include<iostream>
using namespace std;
class Vector{
    int x, y;
public:
    Vector(int a , int b){
        x = a, y = b;
    }
    Vector() { }

        friend Vector operator+(int a, Vector ob);

    void show(){
        cout << "X : " << x << endl;

        cout << "Y : " << y << endl;
    }

};
 Vector operator+(int a, Vector ob)
{
    Vector temp;

     temp.x = a + ob.x;

     temp.y = a + ob.y;

    return temp;
}
int main()
{
    Vector p1(23, 5),p2;

    int a = 7;

    operator+(a,p1);

    p2 = a + p1;


    p2.show();

    return 0;
}

