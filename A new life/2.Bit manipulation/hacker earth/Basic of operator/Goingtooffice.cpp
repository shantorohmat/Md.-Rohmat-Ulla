#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll d;
    cin >> d;
    ll oc,of,od;
    cin >> oc >> of >> od;
    ll cs,cb,cm,cd;
    cin >> cs >> cb >> cm >> cd;
    ll ans1 = oc + ((d-of) * od);
    ll ans2 = cb + ((d/cs)*cm) + (cd * d);
    //cout << ans1 << " " << ans2 << endl;
    if(ans1 <= ans2)
    cout << "Online Taxi" << endl;
    else cout << "Classic Taxi" << endl;
}