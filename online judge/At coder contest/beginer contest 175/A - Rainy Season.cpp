#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int c = 0,ans = 0;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == 'R')
        {

            c++;

        }
        else c = 0;
        ans = max(ans,c);
    }

     cout << ans << endl;
}
