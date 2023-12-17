#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a,t,n,d,i,count  = 0;
    cin >> t;

    while(t--)
    {
        count  = 0;
        cin >> n >> d;
        vector<int> v;

        for(i = 0;i < n;i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());

       for(i = 0 ;i < n;i++)
       {

           if(d < v[i])
           {

               count = 1;
               if(v[0] + v[1] <= d)
               {
                   count = 0;
               }
           }
       }
       if(count == 0) cout << "Yes" << endl;
       else cout << "NO" <<endl;
    }
}
