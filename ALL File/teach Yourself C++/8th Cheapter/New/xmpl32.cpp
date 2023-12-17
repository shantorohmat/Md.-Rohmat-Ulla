#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

public:

    shanto(int x) { this-> x = x ;}
    shanto() { x = 0;}

    void get(int &i) { i = x; }

    friend shanto operator+(shanto ob,shanto oc);



};

shanto operator+(shanto ob,shanto oc)
{
    shanto temp;

    temp = ob + oc;


    return temp;
}



int main()
{
    shanto ob(10),oc(120),ol;

    int x,y;

    ol = ob + oc;

    ol.get(x);

    cout <<  x<<  endl << endl;



    return 0;


}

