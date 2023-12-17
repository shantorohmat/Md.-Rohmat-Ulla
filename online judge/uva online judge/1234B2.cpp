#include <iostream>
#include <stack>
#include <algorithm>
#include <stdio.h>
#include <map>
#define sf scanf
#define pf printf
using namespace std;

 int main(){


 int n,k,val,i,x,p,len;

    while (sf ("%d %d",&n,&k) != EOF)
    {
        map<int,int> mp;
        stack <int> st;

        for (i=1; i<=n; i++)
        {
            sf ("%d",&val);

            if (st.empty())
            {
                mp[val] = 1;
                st.push(val);
            }
            else
            {
                p = st.size()-mp[val]+1;

                if (mp[val] == 0 || (p > 0 && p > k))
                {
                    x = st.top();
                    mp[val] = mp[x]+1;
                    st.push(val);
                }
            }
        }

        if (st.size() > k)
            len = k;
        else
            len = st.size();

        pf ("%d\n%d",len,st.top());
        st.pop();
        --len;

        while (!st.empty())
        {
            if (!len)
                break;

            pf (" %d",st.top());
            --len;
            st.pop();
        }

        pf ("\n");
    }
 }
