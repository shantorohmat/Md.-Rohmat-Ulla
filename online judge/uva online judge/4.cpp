#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> s;
    vector<int> :: iterator it;

    int q,n;

    cin >> q >> n;

    for(int i = 0;i < q;i++)
    {
        int val;

        cin >> val;

        s.push_back(val);
    }
    for(it = s.begin();it != s.end();it++)
    {
        cout << *it << " ";
    }


}
