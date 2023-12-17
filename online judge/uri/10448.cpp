#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,as,bs;
    int os;

    while(cin >> n){

    if(0 < n && 400 >= n)
    {
        as = n + (n*.15);

        bs = n*.15;

        os = 15;
    }
    else if(400 < n && 800 >= n)
    {
        as = n + (n*.12);

        bs = n*.12;

        os = 12;
    }
    else if(800 < n && 1200 >= n)
    {
        as = n + (n*.1);

        bs = n * .1;

        os = 10;
    }
    else if(1200 < n && 2000 >= n)
    {
        as = n + (n*.07);

        bs = n*.07;

        os = 7;
    }
    else if(n > 2000)
    {
        as = n + (n*.04);

        bs = n * .04;

        os = 4;
    }
    cout << "Novo salario: " << fixed << setprecision(2) <<   as << endl;

    cout << "Reajuste ganho: " << fixed << setprecision(2) <<  bs <<  endl;

    cout << "Em percentual: " <<  os << " %" << endl;
    }

    return 0;
}
