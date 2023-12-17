#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> s;
    vector<int> :: iterator it;
    int  q,n;

    cin >> q >> n;

    for(int i = 0;i < q;i++)
        {
            int val;
            cin >> val;
            if(find(s.begin(),s.end(),val)==s.end())
            {
                if(s.size() == n)
                {

                    s.erase(s.begin());
                    s.push_back(val);
                }
                else
                {
                    s.push_back(val);
                }

            }
        }
        reverse(s.begin(),s.end());

        cout << s.size() << endl;

    for(it = s.begin();it != s.end();it++)
    {
        cout << *it << " ";
    }


}
