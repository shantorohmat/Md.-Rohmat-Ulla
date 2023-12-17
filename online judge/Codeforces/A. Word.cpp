#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int c = 0,k = 0;

    for(int i = 0;i < s.size();i++)
    {
        if(s[i] >= 'A' && s[i]  <= 'Z' )
        {
            c++;
        }
        else
        k++;
    }
    //cout << "C "  << c << " " << " K " << k << endl;
    if(c > k)
    {
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] >= 'a' && s[i]  <= 'z' )
            {
                char a = s[i] - 32;
                s[i] = a;
            }
        }
    }
    else {
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] >= 'A' && s[i]  <= 'Z' )
            {
                char a = s[i] + 32;
                s[i] = a;
               // cout << a << endl;
            }
        }
    }

    cout << s << endl;
}
