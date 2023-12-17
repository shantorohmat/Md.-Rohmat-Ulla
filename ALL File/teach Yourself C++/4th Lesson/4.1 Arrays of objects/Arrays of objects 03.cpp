#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a;

public:

    shanto(int a) { this -> a = a; }

    int get() { return a;}
};

int main()
{
    shanto ob[4][2] = {78,85,97,52,89,87,45,65};

    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 2;j++)
        {

        cout << ob[i][j].get() << '\t' ;

        }
        cout << endl;
    }


    return 0;
}





