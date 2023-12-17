#include <iostream>
#include <math.h>
using namespace std;
int res(int a,int b,int c)
{
    int ans,ans1,ans2;
    ans = (b*b) - (4*a*c);
    if(ans < 0) return 0;
    ans = sqrt(ans);
    ans1 = ans - b; 
    ans2 = -ans - b; 
    ans1 = ans1 / (2*a);
    ans2 = ans2 / (2*a); 
    if(ans1 > 0) return ans1;
    if(ans2 > 0) return ans2;
    return 0;

}
int main()
{
    int a,b,c ;
    cin >> a >> b >> c; 
    cout << res(a,b,c) << endl;

}