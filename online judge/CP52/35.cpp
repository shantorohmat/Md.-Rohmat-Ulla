#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int x,y,a,b,r;

        cin >> x >> y ;

        cin >> r;

        cin>> a >> b;

        double m =sqrt (pow((x - a),2) + pow((y - b),2));

        cout << m << endl;

        if(m < r) cout << "The point is inside the circle" << endl;

        else cout << "The point is not inside the circle" << endl;
    }
    return 0;
}
