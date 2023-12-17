#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     ios_base :: sync_with_stdio(false);
     cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int sum = 0;

    getline(cin,s);
    int d = s.size();


    for(int i = 0;i < d;i++)
    {
        sum += (s[i]-'0');

    }

    if(sum%9== 0)
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

}
