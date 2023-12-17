#include<iostream>
using namespace std;
class coord{
    int x, y;
public:
    coord (int a , int b){
        x = a, y = b;
    }

    coord() { }

        friend coord operator+(int a, coord ob);

        friend coord operator+(coord ob,int a);

    void show(){
        cout << "X : " << x << endl;

        cout << "Y : " << y << endl;
    }

};
 coord operator+(int a, coord ob)
{
     coord temp;

     temp.x =  a + ob.x ;

     temp.y = a + ob.y;

    return temp;
}

coord operator+(coord ob,int a)
{
    coord temp;

    temp.x = ob.x + a;

    temp.y = ob.y + a;

    return temp;
}
int main()
{
    coord p1(23, 5),p2;

    int a = 7;

    //voperator+(a,p1);

    p2 = a + p1;

    p2.show();

    p2 = p1 + a;


    p2.show();

    return 0;
}


