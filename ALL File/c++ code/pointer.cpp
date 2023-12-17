#include<iostream>
using namespace std;
int main()
{
    int a = 10,b = 100;

    int *p ;

    p = &a;
    p = &b;
    *p = 105960;

    cout << &a << endl;

    cout <<"*p : " << *p << endl;

    cout << "(int) p : " << (int) p <<endl;

    cout << "p[0] : " << p[0] << endl << "p[1] : " <<   p[1]<<  endl;
    return 0;
}
