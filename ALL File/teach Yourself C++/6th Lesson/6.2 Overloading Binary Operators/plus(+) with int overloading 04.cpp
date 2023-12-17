#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

public:

    shanto(int x = 0,int y = 0) {   this -> x = x,this -> y =  y;}

    void get(int &i,int &j) { i = x,j = y; }

    shanto operator+(shanto pb);
    shanto operator+(int pb);
};

shanto shanto :: operator+(shanto pb)
{
    shanto temp;

    temp.x = x + pb.x;
    temp.y = y + pb.y;

    return temp;
}
shanto shanto :: operator+(int pb)
{
    shanto temp;

    temp.x = x + pb;
    temp.y = y + pb;

    return temp;
}

int main()
{
    shanto b(10,10),oc(4,5),ov;

    int x,y;

    ov =  b + oc;

    ov.get(x,y);

    cout << x << " " <<  y << endl;

    ov = b + 100;

    ov.get(x,y);

    cout << x << " " << y << endl;

    return 0;
}
