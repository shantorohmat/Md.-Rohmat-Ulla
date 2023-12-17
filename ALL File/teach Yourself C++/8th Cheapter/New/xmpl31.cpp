#include <iostream>
#include <iomanip>
using namespace std;

class coord
{
    int x,y;
public:
    coord() {x = 0,y = 0;}
    coord(int i,int j) {x = i,y = j;}
    friend istream &operator>>(istream &stream, coord &ob);


};
istream &operator>>(istream &stream,coord &ob)
{

    stream >> ob.x >> ob.y ;
    return stream;
}


int main()
{
    coord a(10,12),b(45,78);

    cin>> a;
    cin >>b;


    return 0;

}

