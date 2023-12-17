#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a,b;

public :

    shanto (int i,int j) { a = i,b = j;}

    friend int fun(shanto ob);
};

int fun(shanto ob)
{
    if(!(ob.a%ob.b)) return 1;

    else return 0;
}

int main()
{
    shanto ob1(10,2);

    if(fun(ob1)) cout << "2 is a factor of 10" <<endl;

    else cout << "2 is not a factor of 10" << endl;

    return 0;

}
