#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string ,int> m;

    m["shanot"] = 11;
    m["rohmat"] = 13;
    m["sh"] = 45;
    m["tol"] = 45;
    m.insert(make_pair("shom",456));

    map<string,int> :: iterator it;

    it = m.begin();

    while(it != m.end())
    {
        cout << it->first << " : " << it->second << endl;
        it++;
    }
}
