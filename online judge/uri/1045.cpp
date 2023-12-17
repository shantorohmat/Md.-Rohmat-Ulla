#include <iostream>
using namespace std;

int main()
{
    double s[3],temp;

    cin >> s[0] >> s[1] >> s[2];

    for(int i = 0;i < 3;i++)
    {
        for(int j = i+1;j < 3;j++)
        {
            if(s[i] < s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }

    }

    double a,b,c;

    a = s[0];
    b = s[1];
    c = s[2];

    double j,k,l,m;

    j = b+c;

    k = a*a, l = b*b, m = c*c;

    if(a >= j) {cout << "NAO FORMA TRIANGULO" << endl; }

    else
    {
        if(k ==  l + m) {cout << "TRIANGULO RETANGULO" << endl; }

        else if(k > l + m) cout << "TRIANGULO OBTUSANGULO" << endl;

        else if(k < l + m) cout << "TRIANGULO ACUTANGULO" << endl;

        if(a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;

        else if(a == b || b == c || a == c) cout << "TRIANGULO ISOSCELES" << endl;
    }


    return 0;
}
