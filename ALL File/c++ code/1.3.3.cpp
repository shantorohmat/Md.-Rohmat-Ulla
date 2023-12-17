#include<iostream>
using namespace std;

int main()
{
    int a,b,min,d;

    cin >> a >> b ;

    min = a > b ? b : a;

    for(d = 2 ; d < min; d++)
        if((a%d) == 0 && ((b%d)== 0)) break;

    if(d == min)
    {
        cout << "no common denominator for" << d << endl ;
        return 0;
    }
    cout << "the common denominator" <<" " << d <<endl;
    return 0;
}

