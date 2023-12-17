//pre increment
NN#include <iostream>
using namespace std;

class coord
{
public:
    int x,y;

    coord(int i,int j) { x = i, y = j; }

    coord() { }

    coord operator++()
    {
        coord temp;

        temp.x = x++;
        temp.y = y++;

        return temp;
    }

    void show()
    {
        cout << x << endl << y <<endl;
    }
};

int main()
{
    coord p1(29,92);

    ++p1;

    p1.show();

    return 0;


}
