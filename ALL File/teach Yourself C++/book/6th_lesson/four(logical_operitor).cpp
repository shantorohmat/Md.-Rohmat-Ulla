#include <Iostream>
using namespace std;

class coord
{
public:
    int x,y;

    coord(int i,int j) {x = i,y = j; }

    coord() {  }

    bool operator==(coord ob)
    {
        return x = ob.x && y == ob.y;
    }

    bool operator&&(coord ob)
    {
        return (x && ob.x) && (y && ob.y);
    }


};

int main()
{
    coord p1(45,45),p2(45,45),p3;

    if(p1 == p2) cout << true <<endl;
    else cout<< false <<endl;

    if(p1 && p2) cout << true <<endl;
    else cout << false << endl;

}
