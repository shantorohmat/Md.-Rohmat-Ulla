#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,tex;

    while(cin >> x){

    if(0 < x  && 2000 >= x) cout << "Isento" << endl;

    else if(2000 < x && 3000 >= x)
    {
        tex = (x - 2000) * .08;

        cout << "R$ " <<fixed << setprecision(2) << tex << endl;
    }
    else if(3000 < x && 4500 >= x)
    {
        tex = (x - 3000) * .18 + (1000 * .08);
        cout << "R$ " << fixed << setprecision(2) <<   tex << endl;
    }
    else
    {
        tex = ((x - 4500) * .28 )+ (1000 * .08) + (1500 * .18);
        cout << "R$ " << fixed << setprecision(2) <<  tex << endl;
    }

}
return 0;

}
