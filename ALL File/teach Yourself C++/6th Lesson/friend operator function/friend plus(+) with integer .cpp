
#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

public:

    shanto(int x = 0,int y = 0) { this -> x = x,this -> y = y; }

    void get(int &i,int &j) { i = x, j = y; }

    friend shanto operator+(int i,shanto j);

    friend shanto operator+(shanto i,int j);

};

 shanto operator+(int i,shanto j)
 {
     shanto temp;

     temp.x =  j.x + i;

     temp.y =  j.y + i;

     return temp;
 }

 shanto operator+(shanto i,int j)
 {
     shanto temp;

     temp.x = i.x + j;

     temp.y = i.y + j;

     return temp;
 }

 int main()
 {
     shanto ob(10,45),ol;

     int x,y;

     ol = ob + 100;

     ol.get(x,y);

     cout << " ob + 100 X_Y : " << x << " " << y << endl;

     ol = 100 + ob;

     ol.get(x,y);

     cout << " ob + 100 X_Y : " << x << " " << y  << endl;


 }

