#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c ;
    string s,p;
    getline(cin,s);
    for(int i = s.size()-1,j = 0;i >= 0;i--,j++)
    {
        p[j] = s[i];
        ///cout << p[j];


    }
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == p[i])
        {
            c = 0;
        }
        else {
                c = 1;
                break;
        }
    }
    if(c == 1)
    {
        cout << "Second" << endl;
    }
    else cout << "First" << endl;



}
