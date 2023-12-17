#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int f = 0 ;
    cin >> s;

    for(int i = 0;i < s.size();i++)
    {
        int a = s[i] - 48;
        //cout << a << endl;


        if(a == 4 ||  a == 7)
        {
            f++;

        }

    }
    if(f == 4 || f == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
}
