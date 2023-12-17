#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,x1,x2;

    cin >> a>> b >> c;

    if(a == 0 || (((b*b)- (4*a*c))< 0)) {cout << "Impossivel calcular" << endl; }

    else
    {
        x1 = (((-b) + sqrt((b*b) - (4*a*c))) /(2 *a));

         x2 = (((-b) - sqrt((b*b) - (4*a*c))) /(2 *a));

         cout<< "R1 = " <<fixed << setprecision(5) <<x1 << endl;

         cout <<"R2 = " <<fixed << setprecision(5) << x2 <<  endl;

    }

    return 0;

}
