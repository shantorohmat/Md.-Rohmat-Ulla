#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

public:

    shanto(int x = 0,int y = 0) { this -> x = x;this -> y = y; }

    void get(int &i,int &j) { i = x,j = y; }

    friend shanto operator++(shanto &a);

    friend shanto operator++(shanto &a,int c);

};

shanto operator++(shanto &a)
{
    a.x++;
    a.y++;

    return a;
}

shanto operator++(shanto &a,int c)
{
    a.x++;
    a.y++;

    return a;
}

int main()
{
    shanto on(4,5),ol(10,12);

    int x,y;

    on++;

    on.get(x,y);

    cout << "on++ : " << x <<" " << y << endl;

    ++ol;

    ol.get(x,y);

    cout << "++ol : " << x <<" " <<y << endl;

    return 0;
}


