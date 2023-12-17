#include <iostream>
using namespace std;

int main()
{
    int c ;

    cout << "Given a number to separate each number : ";

    cin >> c;

    cout << "Bottom to up : " ;

    int  s1[10];

    for(int i = 0;i < 3;i++)
    {
        s1[i] = c % 10;

    cout << s1[i] << '\t';

     c  = c/10;

    }


    return 0;
}

