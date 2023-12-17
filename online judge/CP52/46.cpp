#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>> t;

    while(t--)
    {
        int a,b,c;

        cin >> a >> b >> c ;

        double s = (a + b + c)/2;

        double x = (s * (s - a) * (s - b) * (s - c) );

        double g = sqrt(x);

        cout << "Area = " <<setprecision(3) << fixed      <<  g << endl;


    }

    cout << endl;
}
