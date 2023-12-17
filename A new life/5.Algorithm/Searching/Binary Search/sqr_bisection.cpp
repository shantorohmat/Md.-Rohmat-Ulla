#include <iostream>
using namespace std;
int x;
double ok(double mid)
{
    if(mid * mid > x) return 1;

    return 0;
}
int main()
{
    cin >> x;
    double low = 0.0,high = x,mid;
    int cnt = 0;
    while(high - low > .000000000000001)
    {
        cnt++;
        mid =(high +low)/2;
        // cout <<  low << " " << high << " " << mid << " " <<  mid*mid <<endl;
        if(ok(mid))
            high = mid;
        else low = mid;
    }
    // cout << mid << " " << mid*mid << endl;
    cout << high << endl;
    cout << cnt << endl;
    
}