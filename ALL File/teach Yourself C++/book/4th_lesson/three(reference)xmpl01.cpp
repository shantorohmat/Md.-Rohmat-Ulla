#include <iostream>
using namespace std;

void fun(double &num)
{
    num = 3 * num;
}
int main()
{
    double d = 7.00;

    cout << d << endl;

    fun(d);

    cout << d << endl;

    return 0;

}
