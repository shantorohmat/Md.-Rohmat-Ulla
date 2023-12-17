#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    string s;
    cin >> s;

    map<string,int>mp;
    for(int i = 0;i < 26;i++)
    {
        string  c;
        cin >> c;
       mp[c] = i;
    }

    for(auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }



}

