#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> ss;

    for(int i = 0;i < s.size();i++)
    {
        ss.insert(s[i]);
    }
    int n = ss.size();



    if(n%2)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else cout << "CHAT WITH HER!" << endl;

    return 0;
}
