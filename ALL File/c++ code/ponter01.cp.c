#include<iostream>
using namespace std;
int main()
{
    int a = 10;

    int *p ;

    p = &a;
    *p = 100;

    cout <<  *p << endl;
    return 0;
}
