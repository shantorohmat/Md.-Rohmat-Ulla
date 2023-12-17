#include <iostream>
#include <iomanip>
using namespace std;

class coord
{
    int x,y;
public:
    coord() {x = 0,y = 0;}
    coord(int i,int j) {x = i,y = j;}
    friend ostream &operator<<(ostream &stream, coord ob);


};
ostream &operator<<(ostream &stream,coord ob)
{
    swap(ob.x,ob.y);
    stream << ob.x << " " <<  ob.y << endl;
    return stream;
}


int main()
{
    coord a(10,12),b(45,78);

    cout << a << b << endl;


    return 0;

}
