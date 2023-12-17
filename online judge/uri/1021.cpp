#include <iostream>
using namespace std;

int main()
{
    double n ;

    int s,p,b;

    cin >> n;

        s = n;

        n = n * 100;

        b = n;

        cout <<"NOTAS:" << endl;

        cout << s / 100 << " nota(s) de R$ 100.00" << endl;

        s = s % 100;

        cout << s / 50 << " nota(s) de R$ 50.00" << endl;

        s = s % 50;

        cout << s / 20 << " nota(s) de R$ 20.00" << endl;

        s = s % 20;

        cout << s / 10 << " nota(s) de R$ 10.00" << endl;

        s = s % 10;

        cout << s / 5 << " nota(s) de R$ 5.00" << endl;

        s = s % 5;

        cout << s / 2 << " nota(s) de R$ 2.00" << endl;

        s = s % 2;

        cout << "MOEDAS:" << endl;

        cout << s / 1 << " moeda(s) de R$ 1.00" << endl;

        b = b % 100;

        cout << b / 50 << " moeda(s) de R$ 0.50" << endl;

        b = b % 50;

        cout << b / 25 << " moeda(s) de R$ 0.25" << endl;

        b = b % 25;

        cout << b  / 10 << " moeda(s) de R$ 0.10" << endl;

        b = b % 10;

        cout << b / 5 << " moeda(s) de R$ 0.05" << endl;

        b = b % 5;

        cout << b / 1 << " moeda(s) de R$ 0.01" << endl;



    return 0;


}
