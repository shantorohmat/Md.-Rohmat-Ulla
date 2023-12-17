#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <iomanip>
#define ll long long int
using namespace std;
double ab,bc,ac,A1,A2,s,T,h,R,ae,ad,de;
bool ok(double ad)
{
    s = ( (ab+bc+ac)/2.0);

    A1 = sqrt(s * (s - ab) * (s - bc) * (s - ac));
    //cout << A1 << endl;

    ae = (ad * ac)/ab;
    de = (ad * bc)/ab;;
    //cout << a << " " << b << " " << c << endl;

    s = ( (ad+ae+de)/2.0);

    A2= sqrt(s * (s - ad) * (s - ae) * (s - de));
    //cout << A2 << endl;

    T = A1 - A2;

    R = A2/T;
    if(R < h) return 1;
    else return 0;



}
int main()
{
    ll t;
    cin >> t;
    for(int i = 1;i <= t;i++){

    cin >> ab>> bc >> ac >> h;
    double maX = max(ab,bc);
    double mAx = max(maX,ac);

    double l = -1,r = bc;


    while(r - l >0.000001 )
    {
        double mid = (l + (r - l)/2);

        if(ok(mid) ) l = mid;
        else r = mid;
    }
    cout <<"Case " << i <<": " <<  setprecision(15)<<r << endl;
    }




}

