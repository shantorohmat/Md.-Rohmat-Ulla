#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long int
int n,m,z;
vector<int>v;
bool ok(int x)
{
    int sum = 0,c = 0;
    for(int i = 0;i < n;i++)
    {
          sum += v[i];
         if(sum > x)
         {
             c++;
             sum = v[i];

         }
    }
    //cout << c << endl;
    if(c < m) return true;
    else return false ;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        cin >> n >> m;
        z = 0;
        for(int i = 0;i < n;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            z += x;
        }
        //cout << z << endl;
        sort(v.begin(),v.end());
        int Max = v[n-1];
        //cout << Max << endl;


        int l = -1,r = z;
        while(l < r - 1)
        {
            int mid = (l+r)/2;
            if(ok(mid)) r = mid;
            else l = mid;
        }
        //cout << r << endl;
        int a,b,c;
        a = r,b = Max;
       cout << max(a,b) << endl;
        v.clear();

    }
}
